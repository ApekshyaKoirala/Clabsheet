#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    float marks[5];
    float per;
};
int main()
{
    int n,i,j; 
    float sum;
    printf("Enter the number of students:");
    scanf("%d",&n);
   struct student s[n];
   for(i=0;i<n;i++)
   {
    printf("Enter the name of student");
    scanf("%s",s[i].name);
    printf("Enter the rollno of student");
    scanf("%d",&s[i].rollno);
    printf("Enter the marks of students in 5 subjects:");
    sum=0;
    for(j=0;j<5;j++)
    {
        scanf("%f",&s[i].marks[j]);
        sum=sum+s[i].marks[j];
    }
    s[i].per=(sum/500)*100;

   }
   for(i=0;i<n;i++)
   {
    printf("The name of student is %s:\n",s[i].name);
    printf("The rollno of student is %d:\n",s[i].rollno);
    printf("The percentage of student =%f:\n",s[i].per);
   }
   return 0;
}