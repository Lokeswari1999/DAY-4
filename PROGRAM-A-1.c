#include<stdio.h>
int main()
{
    int x,y,z,k;
    printf("enter the values ");
    scanf("%d%d%d",&x,&y,&z);
    k = x + y * z / 4 % 2 - 1;
    printf("%d",k);
}
