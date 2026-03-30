#include <stdio.h>
int main()
{
    int n;
    int factorial(int n);
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}
int factorial(int n)
{
    if (n == 0)
        return 1;
        return n * factorial(n - 1);
}
