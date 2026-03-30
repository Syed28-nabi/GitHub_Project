#include <stdio.h>
int main()
{
    // /*Printing output*/
    // int arr[5] = {1, 4, 5, 6, 7};
    // // printf("%d\n", arr[3]);
    // for (int i = 0; i <= 4; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }

    // char a[10] = {'a', '$', '^'};
    // printf("%c\n", a[2]);

    /*Taking Input =  BAKWAS METHOD*/

    // int arr[5];
    // printf("Enter first element : ");
    // scanf("%d", &arr[0]);
    // printf("Enter second element : ");
    // scanf("%d", &arr[1]);
    // printf("Enter third element : ");
    // scanf("%d", &arr[2]);
    // printf("Enter fourth element : ");
    // scanf("%d", &arr[3]);
    // printf("Enter fifth element : ");
    // scanf("%d", &arr[4]);
    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    // printf("%d\n", arr[2]);
    // printf("%d\n", arr[3]);
    // printf("%d\n", arr[4]);

    /*Easy*/
    int arr[5];
    printf("Enter elements of array[5]\n");

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter element number %d : ", i + 1);

        scanf("%d", &arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
 
    return 0;
}