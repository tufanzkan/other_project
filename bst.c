#include<stdio.h>
#include<stdlib.h>

struct treeNode
{
        int data;
        struct treeNode *left;
        struct treeNode *right;
};

struct treeNode * Insert(struct treeNode *node,int data)
{
        if(node==NULL)
        {
                struct treeNode *temp;
                temp = (struct treeNode *)malloc(sizeof(struct treeNode));

                temp -> data = data;
                temp -> left = temp -> right = NULL;
                return temp;
        }
        if(data >(node->data))
        {
                node->right = Insert(node->right,data);
        }
        else if(data < (node->data))
        {
                node->left = Insert(node->left,data);
        }

        /* Else there is nothing to do as the data is already in the tree. */
        return node;
}

struct treeNode * Find(struct treeNode *node, int data)
{
        if(node==NULL)
        {
                /* Element is not found */
                return NULL;
        }
        if(data > node->data)
        {
                /* Search in the right sub tree. */
                return Find(node->right,data);
        }
        else if(data < node->data)
        {
                /* Search in the left sub tree. */
                return Find(node->left,data);
        }
        else
        {
                /* Element Found */
                return node;
        }
}

void PrintInorder(struct treeNode *node)
{
        if(node==NULL)
        {
                return;
        }
        PrintInorder(node->left);
        printf("%d ",node->data);
        PrintInorder(node->right);
}

void PrintPreorder(struct treeNode *node)
{
        if(node==NULL)
        {
                return;
        }
        printf("%d ",node->data);
        PrintPreorder(node->left);
        PrintPreorder(node->right);
}

void PrintPostorder(struct treeNode *node)
{
        if(node==NULL)
        {
                return;
        }
        PrintPostorder(node->left);
        PrintPostorder(node->right);
        printf("%d ",node->data);
}

struct treeNode* FindMin(struct treeNode *node)
{
        if(node==NULL)
        {
                /* There is no element in the tree */
                return NULL;
        }
        if(node->left) /* Go to the left sub tree to find the min element */
                return FindMin(node->left);
        else
                return node;
}

struct treeNode* Delete(struct treeNode *node,int data)
{
struct treeNode *temp;
        if(node==NULL)
        {
                printf("Element Not Found");
        }
        else if(data < node->data)
        {
                node->left = Delete(node->left, data);
        }
        else if(data > node->data)
        {
                node->right = Delete(node->right, data);
        }
        else
        {
                
                if(node->right && node->left)
                {
                        temp = FindMin(node->right);
                        node -> data = temp->data;
                        node -> right = Delete(node->right,temp->data);
                }
                else
                {
                        temp = node;
                        if(node->left == NULL)
                                node = node->right;
                        else if(node->right == NULL)
                                node = node->left;
                        free(temp); 
                }
        }
        return node;
}

int main()
{
        struct treeNode *root = NULL;
        root = Insert(root, 47);
        root = Insert(root, 77);
        root = Insert(root, 25);
        root = Insert(root, 11);
        root = Insert(root, 17);
        root = Insert(root, 93);
        root = Insert(root, 43);
        root = Insert(root, 44);
        root = Insert(root, 31);
        root = Insert(root, 7);
        root = Insert(root, 65);
        root = Insert(root, 68);
        root=Delete(root,47);
        PrintInorder(root);
        printf("\n");
        PrintPreorder(root);
        printf("\n");
        PrintPostorder(root);
        printf("\n");
}
