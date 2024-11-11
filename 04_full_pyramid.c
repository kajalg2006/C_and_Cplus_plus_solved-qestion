#include<stdio.h>
int main()
{
    int n;
    int rows;

    printf("Enter the rows\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}