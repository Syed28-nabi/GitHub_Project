/* We can also declare 'typedef' inside int main() but if we declare outside ,
we can also access in other functions */
// using this we can change the name of data type
#include <stdio.h>
#include<string.h>

typedef float realNumber;
int main()
{

    ////1.

    // typedef int Integer;
    // Integer x = 389;
    // realNumber y = 3.1415;
    // printf("%d\n", x);
    // printf("%f\n", y);

    
    
    ////2.

    typedef struct student
    {
        char name[50];
        float salary;
        int age;
    } student;
    student a;
    student b;
    a.age = 18;
    a.salary = 6000000.00;
    strcpy(a.name,"Aabid Nabi");
    printf("Name: %s\n",a.name);
    printf("Age: %d\n",a.age);
    printf("₹%f\n",a.salary);

    return 0;
}