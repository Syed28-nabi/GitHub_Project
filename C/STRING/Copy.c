/*if we make a string a then copy it into another one using pointer,
then if we make change into first string then it change will automatically applied into another one.*/
#include<stdio.h>
int main()
{
    char s1[]= "Hello world";
    char *s2= s1;//here s2 is shallow , not a deep copy.

    //Let's change in s1.
    s1[0]='G';
    printf("%s",s2);
    return 0;
}