#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,dis,root1,root2,real,img;
    printf("Enter the value of a b and c");
    scanf("%d%d%d",&a,&b,&c);
    dis=sqrt(b*b-4*a*c);
    if(dis>0)
    {
        printf("It has real and unequal root\n");
        root1=(-b+dis)/2.0*a;
        root2=(-b-dis)/2.0*a;
        printf("The roots are %d and %d",root1,root2);
    }
    else if(dis==0)
    {
        printf("The roots are real and equal\n");
        root1=root2=(-b)/2.0*a;
        printf("The roots are %d and %d",root1,root2);
    }
    else
    {
        printf("The roots are unequal\n");
        real=(-b)/2.0*a;
        img=(dis)/2.0*a;
        printf("The roots are %d+i%dand %d-i%d",real,img,real,img);
    }
    return 0;
}