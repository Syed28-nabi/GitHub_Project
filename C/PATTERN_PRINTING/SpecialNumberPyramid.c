#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        int x = i-1;// this loop will print the extra things after the perfect things .RUN TO SEE THIS!
        for(int l =1;l<=i-1;l++)
        { 
            printf("%d",x);
            x--;
        }
        printf("\n");
    }
    return 0;
}