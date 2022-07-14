#include <stdio.h>
int main()
{
    int n,n1,cmpbit;
    printf("enter a num ");
    scanf("%d", &n);
    printf("enter a bit to set ");
    scanf("%d", &n1);
    cmpbit = n^(1 << n1);
    printf("Before complementing the bit %d bit: %d\n", n1, n);
    printf("After complementing the bit %d bit: %d\n", n1, cmpbit);
}
