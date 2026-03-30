#include <stdio.h>
int min(int x, int y)
{

    if (x > y)
        return y;
    else
        return x;
}
int hcf(int x, int y)
{
    int m = 1;
    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
            m = i;
        break;
    }
    return m;
}
int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    int gcd = hcf(a, b);
    printf("%d", gcd);

    return 0;
}