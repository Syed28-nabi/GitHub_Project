#include <stdio.h>
int main()
{
    int r;
    printf("Enter no. of rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter no. of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        printf("Enter marks in all 3 subjects of student %d : ", i + 1);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        printf("Marks obtain in all 3 subjects by student %d : ", i + 1);
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}