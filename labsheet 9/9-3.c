#include<stdio.h>
struct student{
    int rollno;
    char name[30];
    float percentage;
};
int main()
{
   struct student s1;
   struct student *ptr;
   ptr=&s1;
   printf("Enter the rollno of student\n");
   scanf("%d",&s1.rollno);
   printf("Enter the name of student\n");
   scanf("%s",s1.name);
   printf("Enter the percentage of student\n");
   scanf("%f",&s1.percentage);
   printf("The information of student is given below:\n");
   printf("student rollno=%d\n",ptr->rollno);
   printf("student name=%s\n",ptr->name);
   printf("student percentage=%f\n",ptr->percentage);
   printf("student rollno=%d\n",s1.rollno);
   printf("student name=%s\n",s1.name);
   printf("student percentage=%f\n",s1.percentage);
   return 0;
}