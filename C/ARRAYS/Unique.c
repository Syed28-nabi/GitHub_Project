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
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d is unique", arr[i]);
            break;
        }
    }

    return 0;
}