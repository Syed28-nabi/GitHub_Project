#include <stdio.h>
int main()
{
    // int arr[4]={2,4,6,8};
    // printf("%d",arr[0]);
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 6 - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}