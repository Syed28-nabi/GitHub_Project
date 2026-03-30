#include<stdio.h>
int main()
{
    int l,b,a,p;//length,breadth,area and perimeter
    printf("Enter length : ");
    scanf("%d",&l);
    printf("Enter breadth : ");
    scanf("%d",&b);
    a = l*b;
    printf("The Area of a given Rectangle is : %d\n",a);
    p = 2*(l+b);
       printf("The perimeter of a given Rectangle is : %d\n",p);
    if(a>p){
        printf("Here the area is greater than perimeter");
    }
    else{
        printf("Here the area is not greater than perimeter");
    }
    return 0;
}