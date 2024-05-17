#include<stdio.h>
int main()
{
    int i,n,a[100];
    int *ptr[100];
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        ptr[i]=&a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("The value at a[%d]=%d\n",i,*ptr[i]);
        printf("The address of a[%d]=%d\n",i,ptr[i]);
    }
    return 0;
}