#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter no of rows : ");
    scanf("%d", &r);
    printf("Enter no of column : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter elements : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    printf("You entered : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of given matrix is : \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)

        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
     printf("Rotated element by 90 : \n");
    for(int i =0;i<c;i++)
    {
        int j = 0;
        int k = c-1;
        while(j<k)
        {
            int temp = arr[i][j];
            arr[i][j]= arr[i][k];
            arr[i][k]= temp;
            j++;
            k--;
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)

        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}