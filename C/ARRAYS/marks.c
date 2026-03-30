//print roll no. i.e,index of those students whose marks are less than 35.
#include<stdio.h>
int main()
{
    int marks[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
    }
     for (int i = 0; i < 10; i++)
    {
        if(marks[i]<35)
        printf("Roll No. : %d\n",i);
    }
    
    return 0;
}