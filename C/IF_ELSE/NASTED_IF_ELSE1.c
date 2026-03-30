// Q. Take three positive integer and find the greatest of them.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    printf("Enter c :");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("a is the greatest");
        else
            printf("c is the greatest");
    }
    else
    {
        if (b > c)
            printf("b is the greatest");
        else
            printf("c is greatest");
    }
    return 0;
}