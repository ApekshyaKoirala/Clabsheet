#include<stdio.h>
int main()
{
    int n,i,a[30],*ptr;
    ptr=a;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    return 0;
}