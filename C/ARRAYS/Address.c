#include<stdio.h>
int main()
{
    int arr[5]={2,3,4,5,6};
    int n=6;
    for(int i =0;i<n;i++)
    {
        printf("%p\n",&arr[i]);
    }
    printf("%p",&arr[0]);
    return 0;
}