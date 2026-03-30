//Q. take a no. & check that if the number is divisible by 5 and 3
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        if (a % 3 == 0)
        {
            printf("The number is divisible by 5 & 3");
        }
        else
        {
            printf("The number is not divisible by 5 & 3");
        }
    }
    else
    {
        printf("The number is not divisible by 5 & 3");
    }
    return 0;
}