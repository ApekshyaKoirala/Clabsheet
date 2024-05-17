#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,rem,term=0,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        term++;
        num=num/10;
    }
    num=n;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+pow(rem,term);
        num=num/10;
    }
    if(sum==n)
    printf("%d is armstrong",n);
    else
    printf("%d is not armstrong",n);
    return 0;
}