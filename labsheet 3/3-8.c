#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the vvalue of a and b");
    scanf("%d%d",&a,&b);
    char ch;
    printf("Enter + for addition, Enter - for subtraction, Enter * for multiplication, Enter / for division");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+': printf("sum=%d",a+b);
            break;

    case '-': printf("difference=%d",a-b);
             break;
             
    case '*': printf("product=%d",a*b);
              break;

    case '/': printf("quotient =%d",a/b);
            break;

    default :printf("Invalid input");                   
    }
    return 0;

}