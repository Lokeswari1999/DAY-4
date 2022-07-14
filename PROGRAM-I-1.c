#include <stdio.h>
int main()
{
    int n,n1,setbit;
    printf("enter a num ");
    scanf("%d", &n);
    printf("enter a bit to set ");
    scanf("%d", &n1);
    setbit = (1 << n1) | n;
    printf("Before setting the bit %d bit: %d\n", n1, n);
    printf("After setting the bit %d bit: %d\n", n1, setbit);
}
