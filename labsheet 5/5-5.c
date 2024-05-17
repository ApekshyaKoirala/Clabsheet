#include<stdio.h>
long factorial(int i)
{
    long fact=1;
    if(i==0||i==1)
    return 1;
    else 
    for(int j=2;j<=i;j++)
    {
        fact =fact*j;
    }
    return fact;
}
int main()
{
    int n,i;
    float sum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(1.0/factorial(i));
    }
    printf("The sum of 1+1/2!+1/3!+1/4!+.....1/n!=%f",sum);
    return 0;
}