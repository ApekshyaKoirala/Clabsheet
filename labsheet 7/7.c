#include<stdio.h>
int main()
{
    int i,j,m,n,a[30][30];
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}