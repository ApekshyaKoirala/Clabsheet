#include <stdio.h>
int main()
{
    int n, a[1000], i, j, count = 0;
    printf("Enter no of elements in array:\t");
    scanf("%d", &n);
    printf("Enter any %d numbers except 0:\t", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        continue;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = 0;
            }
        }
        if (count >= 1)
            printf("The frequency of %d is %d\n", a[i], count + 1);
        count = 0;
    }
    return 0;
}
