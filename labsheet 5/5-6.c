#include<stdio.h>
#include<math.h>
long factorial(int i)
{
    long fact=1;
    if(i==0||i==1)
    return 1;
    else 
    for(int j=2;j<=i;j++)
    {
        fact =fact*j;
    }
    return fact;
}
int main()
{
    int i,n;
    float x,sum=0;
    printf("Enter the value of x and n");
    scanf("%f%d",&x,&n);
    for(i=1;i<n;i++)
    {
        sum=sum+pow(x,i)/factorial(i);
    }
    printf("The sum of series is %.4f",sum);
    return 0;

}