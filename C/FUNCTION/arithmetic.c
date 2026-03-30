#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int prod(int x, int y)
{
    return x * y;
}
int diff(int p, int q)
{
    return p - q;
}
int quot(int c, int d)
{
    return c / d;
}
int mod(int a, int t)
{
    return a%t;
}
int main()
{
    int a, b;
    printf("Enter a & b : ");
    scanf("%d%d", &a, &b);
    int sum;
    sum = add(a, b);
    int difference = diff(a, b);
    int product = prod(a, b);
    int quotient = quot(a, b);
    int remainder = mod(a,b);
    printf("Sum of a & b is : %d\n", sum);
    printf("Difference  of a & b is : %d\n", difference);
    printf("Product of a & b is : %d\n", product);
    printf("Quotient of a & b is : %d\n", quotient);
    printf("Remainder of a & b is : %d\n", remainder);

    return 0;
}
