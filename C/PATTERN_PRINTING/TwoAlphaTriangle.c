#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int nsp = 1;
    int num = n;
    for (int i = 1; i <= 2 * n + 1; i++)
    {  
        
        printf("%c", (char)i+64);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= num; j++)
        {
            printf("%c",(char)a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int j = 1; j <= num; j++)
        {
            printf("%c",(char)a);
            a++;
        }
        printf("\n");
        nsp += 2;
        num--;
    }
    return 0;
}