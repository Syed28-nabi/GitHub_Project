#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter elements of arr[%d][%d]\n", r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    printf("\n");
    printf("You entered elements of matrix are : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max =0;
    int maxidx = 0;
    for(int i =0;i<r;i++)
    {
        int sum = 0;
        for(int j =0;j<c ;j++)
        {
            sum = sum+arr[i][j];
        }
        if(max>sum)
        maxidx = i;
        else 
        max = sum;
    }
    printf("%d is the sum and %d is the row\n",max,maxidx);
    return 0;
}