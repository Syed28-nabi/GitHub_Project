#include <stdio.h>
int prime(int n)
{
    if(n==1)
    return 1;
    for(int i =2;i<=n;i++)
    {
        if(i%n == 0)
        return i;
    }
    return 0;
}
int main()
{
    int n, factors;
    printf("Enter a number n : ");
    scanf("%d",&n);
    factors = prime(n);
    printf("%d ",factors);
    return 0;
}