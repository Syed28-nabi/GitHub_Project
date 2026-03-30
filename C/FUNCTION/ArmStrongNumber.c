#include<stdio.h>
#include<math.h>
int digit(int num)
{
    int count=0;
    while(num!=0)
    {
        num/=10;
        count++;
    }
    return count;
}

int armstrong(int n)
{
    int num,remainder, digits, sum =0;
    num = n;
    digits = digit(n);
    while(num != 0)
    {
      remainder = num % 10;
      sum = sum + pow(remainder, digits);
      num/=10;
    }
    
    return (sum == n);
}

int main()
{
    printf("Armstrong numbers between 1-600 are : \n");
    for(int i = 1; i<=600; i++)
    {
        if(armstrong(i))
        printf("%d ",i);
    }
    return 0;
}
