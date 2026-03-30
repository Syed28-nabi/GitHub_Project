#include<stdio.h>
int main()
{
    int a = 5;
    int b = 7;
    printf("Before swap\n");
    printf("a : %d\t",a);
    printf("b : %d\t\n",b);
    a = a + b;//a = 5 + 7 = 12
    b = a - b;//b = 12 - 7 = 5 
    a = a - b;//a = 12 - 5 = 7
    printf("After swap\n");
    printf("a : %d\t",a);
    printf("b : %d\t\n",b);

    return 0;
}