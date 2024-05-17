#include<stdio.h>
int main()
{
    int i,r1,r2,count=0;
    printf("Enter the range");
    scanf("%d%d",&r1,&r2);
    for(i=r1+1;i<r2;i++)
    {
        if(i%2==0)
        count++;
    }
    printf("The even numbers between the range %d and %d is %d",r1,r2,count);
    return 0;

}