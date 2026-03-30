#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of arr[%d] :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int index = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                index = j;
                flag = true;
                break;
            }
        }
    }
    if (flag == true)
    {
        printf("%d is the duplicate element in the given array and its index is %d", arr[index],index);
    }
    else
        printf("There is no duplicate in the given array\n");
    return 0;
}