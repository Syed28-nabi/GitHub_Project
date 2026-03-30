//Print 
//9 8 7 6 5 4 3 2 1
//1 2 3 4 5 6 7 8 9
//simultaniously
#include <stdio.h>
void incDec(int n)
{
    if (n == 0)
    {
        printf("\n");
        return;
    }
    printf("%d ", n);
    incDec(n - 1);

    printf("%d ", n);
    return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    incDec(n);
    return 0;
}