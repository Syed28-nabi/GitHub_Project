#include <stdio.h>
int main(){
    int n;
    printf("The value of n :");
    scanf("%d",&n);
    if(n<0){
        n= n*(-1);
    }
    printf("The value of n is %d\n",n);
    return 0;
}