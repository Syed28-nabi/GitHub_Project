// Print the pair of three elements whose sum is equal to x.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter x : ");
    scanf("%d", &x);
    int arr[10];
    printf("Enter elements of arr[10] : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You Entered elements as :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int count = 0;
    printf("Pairs which is = x are : \n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            for (int k = j+1; k < 10; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    printf("(%d,%d,%d)\t", arr[i], arr[j], arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\n");
    printf("Total number of pairs are : %d\n",count);
    return 0;
}