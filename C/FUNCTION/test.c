// #include <stdio.h>
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int combination(int x, int y)
// {
//     int xCy = factorial(x) / (factorial(y) * factorial(x - y));
//     return xCy;
// }
// int main()
// {
//     int n; // number of line
//     printf("Enter n : ");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         for (int k = 1; k <= n - i; k++)
//         {
//             printf("\t");
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             int iCj = combination(i,j);
//             printf("%d\t\t",iCj);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    printf("Hello workld!");
    return 0;
}