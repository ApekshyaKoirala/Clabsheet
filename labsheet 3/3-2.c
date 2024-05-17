#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c)
    {
        if(a>b)
        printf("%d is greatest",a);
        else
        printf("%d is greatest",b);
    }
    else
    {
        if(c>b)
        printf("%d is greatest",c);
        else
        printf("%d is greatest",b);
    }
    return 0;
}