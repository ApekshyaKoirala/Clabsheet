#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number");
    scanf("%d",&n);
    if(n==0)
    printf("The number is zero");
    else if(n==1)
    printf("Neither prime nor composite");
    else
    {
        if(n==2)
        printf("The smallest and only even prime number");
        else
        {
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    flag=1;

                    break;
                }
            }
            if(flag==0)
            printf("%d is prime and odd",n);
            else
            printf("%d is not prime",n);
        }
    }
    return 0;
}