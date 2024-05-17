#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,dis,root1,root2,real,img;
    printf("Enter the value of a b and c");
    scanf("%d%d%d",&a,&b,&c);
    dis=sqrt(b*b-4*a*c);
    if(dis>0)