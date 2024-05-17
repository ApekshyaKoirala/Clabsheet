#include<stdio.h>
typedef struct employee{
    int empno;
    char name[20];
    float salary;
    char address[100];
}emp;
void displayrecord(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("The record of employees is:\n");
    printf("Empno\tName\tSalary\taddress\n");
    printf("%d\t%s\t%f\t%s\n",e[i+1].empno,e[i+1].name,e[i+1].salary,e[i+1].address);
    }
}
void inputrecord( int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("Enter the empno of e[%d]:",i+1);
    scanf("%d",&e[i].empno);
    printf("Enter the name of e[%d]",i+1);
    scanf("%s",e[i].name);
    printf("Enter the salary of e[%d]",i+1);
    scanf("%f",&e[i].salary);
    printf("Enter the address of e[%d]",i+1);
    scanf("%s",e[i].address);
    }
}
int main()
{
    int n,x;
    printf("Enter the numbers of employees:\n");
    scanf("%d",&n);
    struct emp e[n];
    inputrecord(e,n);
    
    displayrecord(e,n);
    
    
    return 0;


}