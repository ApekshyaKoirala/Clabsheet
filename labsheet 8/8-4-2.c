#include<stdio.h>
int main()
{
    int a[100],n,i;
    int (*ptr)[100];
    ptr=&a;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       printf("value at a[%d]=%d\n",i,*(*ptr+i));
    }
    return 0;

}