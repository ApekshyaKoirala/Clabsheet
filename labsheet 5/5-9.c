#include<stdio.h>
int fibo(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,i;
    printf("Enter the nth term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }
    return 0;
}