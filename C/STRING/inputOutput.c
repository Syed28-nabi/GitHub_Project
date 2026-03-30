#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    puts("Enter string : ");
    // scanf("%[^\n]s",str);//without [^\n] scanf doesn't work properly and print only first word(anything before a space).
    scanf("%s",str);
    puts("your string is: ");
    puts(str);


    return 0;
}