#include<stdio.h>
int main()
{
    int m,n,i,j,a[30][30],sum=0;
    printf("Enter the order of matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
            
        }
        printf("Sum of %d row=%d\n",i,sum);
     sum=0;
}
sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            
            sum=sum+a[j][i];
            
        }
        printf("Sum of %d column is %d\n",i,sum);
        sum=0;
    }
    return 0;
}
