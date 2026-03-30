#include <stdio.h>
int main()
{
    int n ;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    printf("Enter elements of arr[5] : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You Entered : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[n - (i+1)];
    }
    printf("Reverse of arr[5] is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", brr[i]);
    }

    return 0;
}