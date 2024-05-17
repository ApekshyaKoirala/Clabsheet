#include<stdio.h>
add (int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
sub (int a,int b)
{
    int difference;
    difference=a-b;
    return difference;
}
mul (int a,int b)
{
    int product;
    product=a*b;
    return product;
}
div (int a,int b)
{
    float quotient;
    quotient=(float)a/b;
    return quotient;
}
int main()
{
    int a,b,sum,difference,product;
    float quotient;
    printf("Enter the values of a and b:");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    difference=sub(a,b);
    product=mul(a,b);
    quotient=div(a,b);
    printf("sum=%d\nDifference=%d\nProduct=%d\nQuotient=%f",sum, difference, product, quotient);
    return 0;
}