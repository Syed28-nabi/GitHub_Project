#include <stdio.h>
int power(int x, int y)
{
    if (y == 0)
        return 1;
    int recAns = x * power(x, y - 1);
    return recAns;
}
int main()
{
    int a;
    printf("Enter base: ");
    scanf("%d", &a);
    int b;
    printf("Enter power: ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d raised to the power %d is: %d", a, b, p);
    return 0;
}