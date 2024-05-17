#include <stdio.h>
int main()
{  int a[100][100], m, n, i, j,srow,scol;
    printf("Enter the order of the matrix:");
    scanf("%d%d", &m, &n);
    printf("Enter the matrix:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++)
    {	  srow=0;
        for (j = 0; j < n; j++)
         srow=srow+a[i][j];   
         printf("Sum of elements in row %d=%d\n",i+1,srow);
    }
 for (j = 0; j < n; j++)
    {  scol=0;
 for (i = 0; i < m; i++)
         scol=scol+a[i][j];   
         printf("Sum of elements in col %d=%d\n",j+1,scol);
    }
    return 0;}

