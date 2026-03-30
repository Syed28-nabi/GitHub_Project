//count elements grater than x.
#include<stdio.h>
int main()
    {
        int x;
        printf("Enter x : ");
        scanf("%d",&x);
        int arr[10];
        printf("Enter elements of arr[10] : \n");
        for(int i =0;i<10;i++){
            scanf("%d",&arr[i]);
        }
        int count =0;
        for(int i = 0;i<10;i++)
        {
            if(arr[i]>x)
            count++;
        }
        printf("%d",count);
        return 0;
    }
