#include<stdio.h>
int main(){
    int cp,sp,pa,la;//c=cost price & s=selling price,pa=profit amount,la=loss amount
    printf("Enter cost price : ");
    scanf("%d",&cp);
    printf("Enter selling price : ");
    scanf("%d",&sp);
    if(cp<sp){
        pa =sp-cp;
        printf("He made the profit of : %d",pa);
    }
    if(cp>sp){
        la = cp-sp;
        printf("He made the loss of : %d",la);
    }
    return 0;
}