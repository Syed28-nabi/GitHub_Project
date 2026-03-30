#include<stdio.h>
int main()
{
    int a = 5;
    int b = 7;
    int temp;
    printf("Before swap\n");
    printf("a : %d\t",a);
    printf("b : %d\t\n",b);
    temp =  a;
    a = b;
    b = temp;
    printf("After swap\n");
    printf("a : %d\t",a);
    printf("b : %d\t\n",b);

    return 0;
}