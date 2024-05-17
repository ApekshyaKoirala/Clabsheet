#include<stdio.h>
int compare(char str1[], char str2[]);
int main()
{
    char str1[100], str2[100];
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);
    char ch=compare(str1, str2);
    if(ch==0)
    printf("different string");
    else
    printf("same string");
  return 0;
    
}
int compare(char str1[], char str2[])
{
    int i=0,j=0,count1=0, count2=0;
    while(str1[i]!='\0')
    {
       count1++;
       i++;
    }
     while(str1[j]!='\0')
    {
       count2++;
       j++;
    }
    if(count1!=count2)
    {
        return 0;
    }
     else{
        for(i=0;i<count1;i++)
        {
            if(str1[i]!=str2[i])
            return 0;
            else
            return 1;
        }
     }
}