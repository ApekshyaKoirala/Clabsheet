#include<stdio.h>
int main()
{
    int i,j,n,a[1000],count=1;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        continue;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=0;
            }
        }
        if(count>1)
        printf("The frequency of %d is %d\n",a[i],count);
        count=1;
    }
    return 0;
}