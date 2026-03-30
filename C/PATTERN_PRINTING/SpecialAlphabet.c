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
            int d = k+64;
            char ch = (char)d;
            printf("%c", ch);
        }   
        int a=i-1;
        for(int l =1;l<=i-1;l++)
        { 
            int d = a+64;
            char ch = (char)d;
            printf("%c",ch); 
            a--;
            
        }
        printf("\n");
    }
    return 0;
}