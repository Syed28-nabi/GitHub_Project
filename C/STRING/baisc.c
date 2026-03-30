#include<stdio.h>
int main()
{
    char str[]="ALIGARH UNIVERSITY";
    str[0]='a';
    str[1]=108;
    int i =0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
    return 0;
}