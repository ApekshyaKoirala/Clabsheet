#include<stdio.h>
int main()
{
    int n,num,rem,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    printf("The rerversed number is %d",sum);
    return 0;
}