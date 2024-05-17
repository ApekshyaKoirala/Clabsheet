#include<stdio.h>
#include<math.h>
long factorial(int n)
{
    int i;
    long fact=1;
    if(n=0)
    return 1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n,i,x=2;
    float sum=0.0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {  
        sum=sum+(pow(x,i)/factorial(i));
    }
    printf("The sum of given series is %f",sum);
    return 0;
    
}