#include<stdio.h>
int main()
{
    int i,a[10];
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array elements are\n");
    for(i=0;i<10;i++)
    {
    printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}