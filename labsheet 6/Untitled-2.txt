#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float avg;
    printf("Enter the total number of elements");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&i);
        sum=sum+i;
    }
    avg=sum/n;
    printf("The sum and average of given numbers is %d and %f respectively",sum,avg);
    return 0;
}