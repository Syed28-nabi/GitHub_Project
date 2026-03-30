// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number of Rows : ");//no.of rows
//     scanf("%d", &n);
// //here we are  printing j = i. i.e, if i = 5 then j will be 1 2 3 4 5
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++)
//         {
//             // printf("%d",j);
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // OR

#include <stdio.h>
int main()
{
    int m = 9;
    for (int i = 0; i <= 4; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= m; j++)
        {
            printf("*");
        }
        m = m - 2;
        printf("\n");
    }
    return 0;
}