#include<stdio.h>
int fibo(int n)
{
    int fibonacci;
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
         return fibonacci=fibo(n-1)+fibo(n-2);

}
int main()
{
    int n,fibonacci;
    printf("Enter the nth term for fibbonacci series:");
    scanf("%d",&n);
    fibonacci =fibo(n);
    printf("The %d term of fibonacci series is: %d",n,fibonacci);
    return 0;

}