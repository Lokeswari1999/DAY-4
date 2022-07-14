#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("enter the values ");
    scanf("%d%d%d",&i,&j,&k);
    l=i&&j||j&&k; 
    printf("%d\n",l);
}
