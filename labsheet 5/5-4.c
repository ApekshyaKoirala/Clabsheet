#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(1.0/i);
    }
    printf("The sum of series of 1+1/2+1/3+1/4+.......1/n=%f",sum);
    return 0;
}