#include<stdio.h>
#include<math.h>
int factorial(int x)
{
    int fact = 1;
    for(int i = 2;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int n, r, nfact = 1, rfact = 1,n_rfact = 1 ;
    float nCr ;
    printf("Enter n & r :");
    scanf("%d%d",&n,&r);
    nfact = factorial(n);
    rfact = factorial(r);
    n_rfact = factorial(n-r);
    nCr = nfact/(rfact*n_rfact);
    printf("%.2f",nCr);

    return 0;
}