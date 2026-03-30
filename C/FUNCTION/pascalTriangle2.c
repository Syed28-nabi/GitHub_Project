#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number n:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        int first = 1;
        for (int g = 1; g <= n - i; g++)
        {
            printf("\t");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t\t", first);
            first = first * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}