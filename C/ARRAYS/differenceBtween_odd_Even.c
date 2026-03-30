#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter element of arr[10] : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int SumEven = 0, SumOdd = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            SumEven = SumEven + arr[i];
        else
            SumOdd = SumOdd + arr[i];
    }
    printf("Sum of even indices is : %d\n", SumEven);
    printf("Sum of odd indices is : %d\n", SumOdd);
    int deffrence = SumEven - SumOdd;
    printf("%d", deffrence);
    return 0;
}