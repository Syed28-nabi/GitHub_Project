#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter elements of 1st array : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[r][c];
    printf("Enter elements of 2nd array: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("Sum of arr[%d][%d] and brr[%d][%d] is \n",r,c,r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j]=arr[i][j] + brr[i][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}