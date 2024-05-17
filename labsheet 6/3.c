 #include<stdio.h>
#include<math.h>
long factorial( int n)
{
    
    int i;
    if(n==0)
    return 1;
    for(i=1;i<=n;i++)
    {
        return n*factorial(n-1);
        
    }
}
int main()
{
    int i,n,fact;
    printf("Enter the value of n:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("The factorial of %d=%d",n,fact);
    return 0;
}