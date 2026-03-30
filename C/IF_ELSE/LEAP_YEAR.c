#include <stdio.h>
int main()
{
    int Year;
    printf("Enter an year : ");
    scanf("%d", &Year);
    if (((Year % 4 == 0) && (Year % 100 !=0)) || (Year % 400 == 0))
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    return 0;
}