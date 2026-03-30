//we can change the individual value in normal initialization of string as str[],but can't change the entire string .
//we can't change the individual value in pointer initialization of string as char *ptr = "Aabid nabi,but can change the entire string .
#include<stdio.h>
#include<string.h>
int main()
{
    char str[11]="Aabid Nabi";
    char* ptr = str;
    *ptr='a';//it will replace 1st character because *ptr means value of address stored in ptr and ptr stores ther address of 1st element of str.
    printf("%s",str);
    printf("\n");
    



    // //Pointer initialization.
    // char* ptr = " Aabid Nabi";
    // ptr = "Abu bakar";
    // printf("%s",ptr);
    return 0;
}