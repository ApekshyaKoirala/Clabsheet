#include<stdio.h>
typedef struct  employee{
  char name[100];
  int empno;
  char address[100];
  float salary;
}emp;
void printinfo(emp info)
{
   printf("The information of employee is given below");
   printf("%s\t %d\t %s\t %f\t",info.name,info.empno,info.address,info.salary);
   printf("\n");
}
int main()
{
  emp info[100];
  int n;
  printf("Enter the number of employee\n");
  scanf("%d",&n);
  printf("Enter the information of  employee\n");
  printf("ENter name empno address and salary\n");
  for(int i=0;i<n;i++)
  {
    scanf("%s%d%s%f",info[i].name,&info[i].empno,info[i].address,&info[i].salary);
  }
  for(int i=0;i<n;i++)
  {
  printinfo(info[i]);
  }
  return 0;
}