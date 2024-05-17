#include<stdio.h>
int main()
{
   float a,b,c,d,e,marksobtained,percentage;
    printf("Enter the marks obtained by student in maths,c programming, basic electrical engineering,mechanics and physics");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    if(a>=40&&b>=40&&c>=40&&d>=40&&e>=40)
    {
        printf("The student have passed the exam\n");
        marksobtained =a+b+c+d+e;
        percentage=(marksobtained/500)*100;
        if(percentage>=90)
        printf("The student has got A grade");
        if(90<percentage>=80)
        printf("The student has got B grade");
        if(80<percentage>=70)
        printf("The student has got C grade");
        if(70<percentage>=60)
        printf("The student has got D grade");
        if(60<percentage>=40)
        printf("Student has got E grade");
    }
    else
    printf("The student is not qualified for grading");
    return 0;
}