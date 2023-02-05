#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Tufan Özkan Q7 210201078

struct dikdortgen
{
    float x,y,x2,y2;
};

struct dikdortgen merkezeAl(float leftx, float lefty, float rightx, float righty)
{
   struct dikdortgen m;

   m.x=-(fabs(leftx)+fabs(rightx))/2;

   m.y=(fabs(lefty)+fabs(righty))/2;

   m.x2=(fabs(leftx)+fabs(rightx))/2;

   m.y2=-(fabs(lefty)+fabs(righty))/2;

   return m;
};

int main()
{
    struct dikdortgen left;
    struct dikdortgen right;

    printf("Sol ust x ve y koordinatlari girin:");
    scanf("%f %f", &left.x, &right.y);

    printf("Sag alt x ve y koordinatlari girin:");
    scanf("%f %f", &right.x, &left.y);

    struct dikdortgen m = merkezeAl(left.x, left.y, right.x, right.y);

    printf("%.1f %.1f %.1f %.1f", m.x, m.y, m.x2, m.y2);

    return 0;
}