//print number 1234 in 4 lines

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Rows : ");//no.of rows
    scanf("%d", &n);
    int m;
    printf("Enter number of columns : ");//no.of columns
    scanf("%d", &m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}