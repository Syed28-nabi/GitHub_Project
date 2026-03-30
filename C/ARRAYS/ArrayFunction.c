#include <stdio.h>
void fun(int x[])
{
    x[0] = 4;
    x[1] = 3;
    x[2] = 2;
    x[3] = 1;
    return;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);

    }
    printf("\n");
    fun(arr);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}