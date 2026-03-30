#include <stdio.h>
int main()
{
    int r;
    printf("Enter r :");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        int a = 1;
        for (int k = 1; k <= i; k++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}
