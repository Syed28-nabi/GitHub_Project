// 1.print pattern using loops

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Rows : "); // no.of lines
    scanf("%d", &n);
    int m;
    printf("Enter number of Columns : "); // no of stars in each line
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)//we can use iin nested loop but it is suggested to use j or any other variable
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



// // //2.print a solid stars
// // //here we should keeps rows = columns.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number of Rows and columns : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }