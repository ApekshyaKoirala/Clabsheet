#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the nummber whose table is to be displayed");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,(n*i));
    }
    printf("\n");
    return 0;

}