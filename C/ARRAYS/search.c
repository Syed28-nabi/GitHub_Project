#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, x; // n->No.of element in an array & x->a specific element which is present or not.
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter x : ");
    scanf("%d", &x);
    printf("You entered x = %d\n", x);
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
    bool flag = false;//bool is a data type which stores only two values either true or false.
    /*false means x is not present & true means x is present in the given array*/
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            index = i;
            break;
        }
    }
    if(flag==true)
    printf("%d is present in given array and its index is %d",x,index);
    else
    printf("%d is not present in given array",x);
    return 0;
}