#include<stdio.h>
void minimax(int a[],int n,int *min,int *max)
{
    int i;
    *min=a[0];
    *max=a[0];
    for(i=0;i<n;i++)
    {
        *min=(a[i]<*min)?a[i]:*min;
        *max=(a[i]>*max)?a[i]:*max;
    }
        
    


}
int main()
{
    int min,max,n,i,a[10];
    printf("Enter the numbers of array:");
    scanf("%d",&n);
    printf("enter the elments of array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The elements of array are:\n",a[i]);
    minimax(a,n,&min,&max);
    printf("Max=%d\nmin=%d",max,min);
    return 0; 
}