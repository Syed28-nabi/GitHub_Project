#include <stdio.h>
int main()
{


    // PART 1.


    char str[] = {'A', 'a', 'b', 'i', 'd', '\0'};
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");


    // PART 2.


    char str1[] = "I am Aabid from AMU Aligarh";
    int j = 0;
    while (str1[j] != '\0')
    {
        printf("%c", str1[j]);
        j++;
    }
    return 0;
}