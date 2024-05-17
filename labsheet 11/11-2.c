#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("abc.txt","w");
    fputc('T',fptr);
    fputc('h',fptr);
    fputc('i',fptr);
    fputc('s',fptr);
    fputc(' ',fptr);
    fputc('i',fptr);
    fputc('s',fptr);
    fclose(fptr);
    fptr=fopen("abc.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    return 0;
    
}