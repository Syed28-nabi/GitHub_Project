#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter a & b : ");
    scanf("%d%d",&a,&b);
    printf("Before swapping\n");
    printf("a : %d\t",a);
    printf("b : %d\t",b);
    printf("\nAfter swapping\n");
    swap(&a,&b);
    printf("a : %d\t",a);
    printf("b : %d\t",b);



    return 0;
}