#include <stdio.h>
int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("The number is : %d\n",a);
    if(a%5==0 || a%3==0){
    printf("The Number %d is divisible by 5 or 3\n",a);
} else{
    printf("The Number %d is not divisible by 5 or 3\n",a);
}
    return 0;
}