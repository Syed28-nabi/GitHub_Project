#include <stdio.h>
int main()
{
    char s1[] = "Physics Wallah";
    int i = 0;
    int size = 0;
    while (s1[i] != '\0')
    {
        i++;
        size++;
    }
    char s2[size];
    for (int i = 0; i <= size; i++)
    {
        s2[i] = s1[i];
    }
    puts(s2);
    puts(s2);
    s1[0]='G';
    puts(s1);
    puts(s2);
    return 0;
}