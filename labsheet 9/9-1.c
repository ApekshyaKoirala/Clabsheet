#include<stdio.h>
#include<string.h>
struct employee{
    int no;
    char name[100];
    float salary;
}emp;
int main()
{
    int n,i;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct employee e[n];
    for(i=1;i<=n;i++)
    {
        printf("Enter the information of %d employee:\n:",i);
        printf("Enter employee id:");
        scanf("%d",&e[i].no);
        printf("Enter the employee name:");
        scanf("%s",e[i].name);
        printf("Enter the salary:");
        scanf("%f",&e[i].salary);
    }
    printf("The information of %d employees is\n");
    printf("Id\tName\tsalary\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t%s\t%f\n",e[i].no,e[i].name,e[i].salary);

    }
    return 0;


}