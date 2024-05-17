#include<stdio.h>
int main()
{
    FILE *fptr;
    char a[20];
    fptr=fopen("abc.txt","w");
    printf("Enter the string:");
    scanf("%s",a);
    fprintf(fptr,"%s",a);

    fclose(fptr);
    fptr=fopen("abc.txt","r");
    fgets(a,20,fptr);
    printf("%s",a);
    fclose(fptr);
    return 0;
}