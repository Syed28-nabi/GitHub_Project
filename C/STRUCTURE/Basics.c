#include<stdio.h>
int main()
{
    struct employee{
        int id;
        char grade;
        float salary;
    };
    struct employee Aabid;
    Aabid.grade = 'A';
    Aabid.id = 7748;
    Aabid.salary = 100000.00;
    printf("%d ",Aabid.id);
    printf("%.2f ",Aabid.salary);
    printf("%c ",Aabid.grade);
    return 0;
}