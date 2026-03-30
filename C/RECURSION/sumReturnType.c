#include <stdio.h>
int main()
{
    int n;
    int sum(int n);
    printf("Enter a number: ");
    scanf("%d", &n);
    int Total = sum(n);
    printf("Sum of from 1 to %d is : %d\n", n, Total);
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return n;
        return n + sum(n - 1);
}
