#include <stdio.h>
int palindrom(int x[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (x[i] != x[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of arr[%d] : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You entered : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (palindrom(arr, n))
    {
        printf("The array is a Palindrom");
    }
    else
        printf("The array is not a Palindrom");

    return 0;
}