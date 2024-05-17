#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float avg;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=1;i<=n;i++)
    {
       scanf("%d",&i);
       sum=sum+i; 
    }
    avg=sum/n;
    printf("The sum and avg of given elements is %d and %f respectively",sum,avg);
    return 0;
}