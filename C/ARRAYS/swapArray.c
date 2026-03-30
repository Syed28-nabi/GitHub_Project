//swap the value of element using function.
#include<stdio.h>
void swap(int x[])
{
    int temp = x[2];
    x[2]=x[3];
    x[3]=temp;
    return ;
}
int main()
{
    int arr[5]= {1,2,3,4,5};
    printf("%d %d\n",arr[2],arr[3]);
    swap(arr);
    printf("%d %d\n",arr[2],arr[3]);
    return 0;
}