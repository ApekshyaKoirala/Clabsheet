#include<stdio.h>
void fswap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int a,b;
  printf("Enter the values of a and b");
  scanf("%d%d",&a,&b);
  printf("Before swapping a=%d and b=%d\n",a,b);
  fswap(&a,&b);
  printf("After swapping a=%d and b=%d",a,b);
  return 0;
}