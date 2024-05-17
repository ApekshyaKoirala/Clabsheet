#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if('a'<=ch&&ch<='z'||'A'<=ch&&ch<='Z')
    {
        printf("The character is alphabet\n");
        if('a'<=ch&&ch<='z')
        printf("The alphabet is lower case");
        else
        printf("The alphabet is upper case");
    }
    else
    printf("The character %c is not alphabet",ch);
    return 0;
}