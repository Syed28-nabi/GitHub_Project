#include <stdio.h>
int main()
{
    char s1[15] = "Abid Nabi";
    printf("%s\n", s1);
    for (int i = 8; i >= 1; i--)
    {
        s1[i + 1] = s1[i];
    }
    s1[1]='a';
    printf("%s\n", s1);
    return 0;
}