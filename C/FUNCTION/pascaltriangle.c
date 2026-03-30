#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int fact(int n, int r)
{
    int iCj = factorial(n) / (factorial(r) * factorial(n - r));

    return iCj;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    { 
        for(int k = 1;k<=n-i;k++)
        {
            printf("\t");
        }
        
        for (int j = 0; j <= i; j++)
        {
            int iCj = fact(i, j);
            printf("%d\t\t", iCj);
        }

        printf("\n");
    }
    return 0;
}