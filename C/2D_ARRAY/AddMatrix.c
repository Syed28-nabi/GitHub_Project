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
    printf("Elements of 1st array are\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
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
    printf("Elements of 2nd array are\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    int res[r][c];
    printf("Sum of arr[%d][%d] and brr[%d][%d] is \n",r,c,r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j]=arr[i][j] + brr[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}