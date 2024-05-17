#include<stdio.h>
int main()
{
    int *s,*d,a,b,c,f;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);
    c=a+b;
    f=a-b;
    s=&c;
    d=&f;
    printf("The sum of a and b is %d\n",*s);
    printf("The difference of a and b is %d\n",*d);
    return 0;

    

}