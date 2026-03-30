//Find the greatest one of array elements. 
#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter Elements of arr[10] :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }
    printf("You Entered arr[10] : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Maximum of all element is : %d\n",max);
    return 0;
}