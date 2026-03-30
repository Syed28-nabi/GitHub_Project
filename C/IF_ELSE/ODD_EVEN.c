#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //if(Condition){ function } if and else are control statements
    if(n%2==0){
        printf("The number you entered is Even");
    }
    // if(n%2!=0){
    //     printf("The number you entered is Odd"); 
    // }
    else{
        printf("The number you entered is Odd");
    }

    return 0;
}