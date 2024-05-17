#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,m,n,p,q;
    printf("Enter the order of 1st matric");
    scanf("%d%d",&m,&n);
    printf("Enter the order of 2nd matix");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("The matrix cannot be multiplied");
    }
    else
    {
      printf("Enter first matrix\n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
      }
      printf("Enter second matrix\n");
      for(i=0;i<p;i++)
      {
        for(j=0;j<q;J++)
        scanf("%d",&b[i][j]);
      }
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
      }
    }
}