#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter the values ");
    scanf("%d%d",&i,&j);
    k=i||j&j;
    printf("%d\n",k);
}
