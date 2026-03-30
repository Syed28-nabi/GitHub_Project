// Q. take three numbers as input & tell if they can be he side of triangle
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
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Yes! They can be the side of triangle");
    }
    else
    {
        printf("No! They can't be the side of triangle");
    }
    return 0;
}