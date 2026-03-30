//if indices even then add 10 to that element. if odd then multyply by 2
#include<stdio.h>
int main()
{
    int arr[10] = {1,2,20,4,5,6,37,18,19,21};
    for(int i = 0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i = 0;i<10;i++)
    {
        if(i%2==0)
        printf("%d ",arr[i]+10);
        else
        printf("%d ",arr[i]*2);
    }
    
    return 0;
}