#include<stdio.h>
#include<stdlib.h>

// AVL ağacı için düğüm
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int height(struct Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}

struct Node* newNode(int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;
    // Yeni düğüm ilk olarak yaprakta eklenir
    return(node);
}

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;
    // Döndürme
    x->right = y;
    y->left = T2;
    // Yükseklikler güncelleniyor
    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;
    // yeni kok
    return x;
}

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;
    // döndürme
    y->left = x;
    x->right = T2;
    //  Yükseklikler güncelleniyor
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;
    // yeni kok
    return y;
}

// N. düğüm için denge faktörü
int getBalance(struct Node *N)
{
    if (N == NULL)		return 0;
    return height(N->left) - height(N->right);
}

struct Node* insert(struct Node* node, int key)
{
    /* BST ağacına ekleme */
    if (node == NULL)  return(newNode(key));
    if (key < node->key)  node->left  = insert(node->left, key);
    else if (key > node->key)  node->right = insert(node->right, key);
    else  return node;
    /* 2. Yükseklikler güncelleniyor */
    node->height = 1 + max(height(node->left), height(node->right));
    /* 3. Yeni ekleme işlemi ile denge hesaplanıyor */
    int balance = getBalance(node);
    // Eklenen düğüm dengesiz ise 4 durum vardır
    // Solun solu
    if (balance > 1 && key < node->left->key)	return rightRotate(node);
    // Sağın sağı
    if (balance < -1 && key > node->right->key)  return leftRotate(node);
    // Solun sağı
    if (balance > 1 && key > node->left->key)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);

    }
    // Sağın solu
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}

// Ağaç içinde dolaşma
void preOrder(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d %d \n", root->key,root->height);
        preOrder(root->left);
        preOrder(root->right);
    }
}


int main()
{
    struct Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    printf("AVL ağacında Preorder dolaşma:\n");
    preOrder(root);
       	return 0;

}



