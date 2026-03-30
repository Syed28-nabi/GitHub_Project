#include <stdio.h>
int main(){
    int p;//Percentage
    printf("Enter Percentage : ");
    scanf("%d",&p);
    //more than 80->A
    // more than 70->B
    // more than 60->C
    // more than 50->D
    // more than 40->E
    // less than 40->Fail
    if(p>80){
        printf("A Grade");
    }
    else if(p>70){
        printf("B Grade");
    }
    else if(p>60){
        printf("C Grade");
    }
    else if(p>50){
        printf("D Grade");
    }
    else if(p>40){
        printf("E Grade");
    }
    else if(p<=40){
        printf("Fail");
    }
    return 0;
}