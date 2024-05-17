#include <stdio.h>
int main()
{
    int n, a[1000], i, j, temp;
    printf("Enter no of elements in array:\t");
    scanf("%d", &n);
    printf("Enter any %d number:\t", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Numbers in Descending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
