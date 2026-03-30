#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[50];
        float salary;
        int age;
    }a,b;
    a.age = 20;
    a.salary = 60000.00;
    strcpy(a.name,"Aabid");
    printf("%s\n",a.name);
    // printf("%d\n",a.age);
    // printf("%f\n",a.salary);

    b.age = 30;
    b.salary = 54800.00;
    // strcpy(b.name,"Aamir");
    // printf("%s\n",b.name);
    printf("Age of aamir is : %d\n",b.age);
    // printf("%f\n",b.salary);
    return 0;
}