#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int nsp = 1;
    int num = n;
    int x = 1;
    for (int j = 1; j <= n+1; j++)
    {
        printf("%d", x);
        x++;
    }
    x-=2;
    for (int i = 1; i <= n; i++)
    {
        printf("%d", x);
        x--;
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= num; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        a--;
        for (int j = 1; j <= num; j++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
        nsp += 2;
        num--;
    }
    return 0;
}