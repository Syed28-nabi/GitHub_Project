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
    printf("You entered elements : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max = 0;
    int ridx;
    int cidx;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(max<arr[i][j])
            max = arr[i][j];
            ridx = i;
            cidx= j; 
        }
    }
    printf("Maximum element is %d and its ibdex is arr[%d][%d]",max,ridx,cidx);
    return 0;
}