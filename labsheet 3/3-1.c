#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    if(n>0)
    printf("The number is positive");
    else if(n==0)
    printf("The number is zero");
    else
    printf("The number is negative");
    return 0;
}