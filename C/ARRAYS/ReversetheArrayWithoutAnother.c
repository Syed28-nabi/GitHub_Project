#include<stdio.h>
void reverse(int x[])
{
    int i =0;
    int j =4;
    while(i<j)
    {
        int temp = x[i];
        x[i] =x[j];
        x[j]=temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    /*  int arr[10]={2,3,4,6,8,5,7,9,1,5};
    reverse(arr);
    for(int i =0;i<10;i++)   */
    
    int arr[5]={2,3,4,6,8};
    reverse(arr);
    for(int i =0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}