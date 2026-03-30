// declaring , initialization & accessing.
// declaration (can also be done before ; as struct student{}Aabid,Aahil,etc...;) & initialization are below 
// Accessing -> we can access it using dot"."operator.
// elements are stored in a continuous memory location.

#include <stdio.h>
int main()
{
    struct student
    {
        char name[15];
        int roll;
        int marks;
        float percentage;
        char grade;
    };
    struct student;

    return 0;
}