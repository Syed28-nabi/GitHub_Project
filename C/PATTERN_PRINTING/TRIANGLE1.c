#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Rows : "); // no.of lines
    scanf("%d", &n);
    // herw we are  printing j = i. i.e, if i = 5 then j will be 1 2 3 4 5
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
            // printf("*");
        }
        printf("\n");
    }
    return 0;
}