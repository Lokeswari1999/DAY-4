#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the values ");
    scanf("%d%d",&x,&y);
    z=(x*x*x)<(y*x*x);
    printf("%d",z);
}
