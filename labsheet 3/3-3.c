#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("The word is vowel");
    else
    printf("The word is consonant");
    return 0;
}