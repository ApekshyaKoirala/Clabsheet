#include<stdio.h>
void calculator(int a, int b,int *sum, int *diff, int *pro, float *quo)
{
    *sum=a+b;
    *diff=a-b;
    *pro=a*b;
    *quo=a/b;

}
int main()
{
    int a,b,sum,diff,pro;
    float quo;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    calculator(a,b,&sum,&diff,&pro,&quo);
    printf("The sum of a and b is %d\n",sum);
    printf("The diff of a and b is %d\n",diff);
    printf("The pro of a and b is %d\n",pro);
    printf("The quo of a and b is %f\n",quo);
    return 0;
}