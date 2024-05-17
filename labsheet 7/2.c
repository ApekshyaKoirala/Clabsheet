#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[10],sum=0;
    float avg;
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/10;
    printf("The sum is %d and the average is %f",sum,avg);
//    getch();
    return 0;
}
    