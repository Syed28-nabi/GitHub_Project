#include <stdio.h>
int main()
{
    void increasing(int x,int n);//function prototype.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    increasing(1, n);
    return 0;
}
void increasing(int x, int n)
{
    if (x > n)
        return;
    printf("%d ", x);
    increasing(x + 1,n);
    return;
}