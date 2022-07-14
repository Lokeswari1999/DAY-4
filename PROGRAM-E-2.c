#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter the values ");
    scanf("%d%d",&i,&j);
    k=i++-++j;
    printf("%d %d %d\n",i,j,k);
}
