#include <stdio.h>
void greet()
{
    printf("Good Morning\n");
    printf("How are you?\n");
    return;
}
int main()
{
    printf("Hey Hello!\n");
    greet();
    printf("Today is Friday\n");
    printf("Hey Hello!\n");
    greet();
    printf("Today is Saturday\n");
    printf("Hey Hello!\n");
    greet();
    printf("Today is Sunday\n");
    return 0;
}