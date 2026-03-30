// calculate nth fibonacci series using recursion.
#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, sum=1;
    printf("Enter nth term: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", sum);
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}