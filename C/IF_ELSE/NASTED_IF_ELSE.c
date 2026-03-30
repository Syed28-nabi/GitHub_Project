// Q. Take positive integer and tell if it is divisible by 5 or 3 but not divisible by 15.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a % 5 == 0 || a % 3 == 0)
    {
        if (a % 15 != 0)
        {
            printf("The number is divisible by 5 or 3 but not by 15\n");
        }
        else
        {
            printf("The Number %d is divisible by 5 or 3 as well as divisible by 15\n", a);
        }
    }
    else
    {
        printf("The Number %d is not divisible by 5 or 3\n", a);
    }
    return 0;
}
//also we can do it by if ( (a % 5 == 0 || a % 3 == 0) && a != 15) do not forget to apply bracket between OR and AND operations😎😉