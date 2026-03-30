// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         // for (int k = 1; k <= 2*i-1; k++) // here no need of a
//         for (int k = 1; k <= a; k++)
//         {
//             printf("*");
//         }
//         a += 2;
//         printf("\n");
//     }
//     return 0;
// }
// OR

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         // for (int k = 1; k <= 2*i-1; k++) // here no need of a
//         for (int k = 1; k <= a; k++)
//         {
//             printf("%d",k);
//         }
//         a += 2;
//         printf("\n");
//     }
//     return 0;
// }

// OR
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c", ch);
            a = a + 1;
        }
        printf("\n");
    }
    return 0;
}