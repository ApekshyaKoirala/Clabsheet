#include <stdio.h>
int main()
{
    int matrix[100][100],m,n,i,j,transpose[100][100];
    printf("Enter the order of the matrix:");
    scanf("%d%d", &m, &n);
    printf("Enter the matrix:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }
    printf("Original matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
printf("Transpose matrix\n");
for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    transpose[j][i]=matrix[i][j];
    }
for(i=0;i<n;i++)
    {  for(j=0;j<m;j++)
     printf("%d\t",transpose[i][j]);
      printf("\n");
        }
    return 0;
}
