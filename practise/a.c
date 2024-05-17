#include<stdio.h>
void generateseries(int num)
{
    if(num<=0)
    return;
    generateseries(num-1);
    for(int i=0;i<num;i++)
    {
       printf("1");
       
}
printf(" ");
    }

int main()
{
    int num;
    printf("Enter the number of terms");
    scanf("%d",&num);
    generateseries(num);
    return 0;
}