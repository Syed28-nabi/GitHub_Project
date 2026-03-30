#include<stdio.h>
int main()
{
    int a = 5;
    int* x = &a;
    printf("%p\n",&a);//address of a 
    printf("%p\n",&x);//address of x
    printf("%d\n",*x);//value at address stored in x.
    printf("%d\n",a);//value of a 
    printf("%p\n",x);//value of x (which is address)
    *x= 9;
    printf("%d\n",a);//value of a after changing the value
    printf("%d\n",*x);
    return 0;
}