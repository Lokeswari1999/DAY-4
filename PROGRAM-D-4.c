#include<stdio.h>
int main()
{
    int i,j,m,k;
    printf("enter the values ");
    scanf("%d%d%d",&i,&j,&m);
    k=i&&j|m&&j;
    printf("%d\n",k);
}
