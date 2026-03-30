#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int pages;
    }a,b,c;
    a.pages = 100;
    a.price = 600.00;
    strcpy(a.name,"QasasulQuran");
    printf("%s\n",a.name);
    printf("%d\n",a.pages);
    printf("%f\n",a.price);

    b.pages = 300;
    b.price = 548.00;
    strcpy(b.name,"AhkamEislam");
    printf("%s\n",b.name);
    printf("%d\n",b.pages);
    printf("%f\n",b.price);
    return 0;
}