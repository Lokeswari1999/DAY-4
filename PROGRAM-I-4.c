#include <stdio.h>
int checkPowerOf2(unsigned int num)
{
    if ((num & (num - 1)) != 0)
        return 0;
    return 1;
}

int main()
{
    unsigned int num = 0;
    printf("enter the number ");
    scanf("%d", &num);
    if (checkPowerOf2(num))
        printf("Given number is power of 2 ");
    else
        printf("Given number is not power of 2 ");
}
