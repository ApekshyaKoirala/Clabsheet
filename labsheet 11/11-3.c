#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("abc.txt","r");
    int n;
    if(fptr==NULL)
    printf("File cannot be opened");
    else
    {
        fscanf(fptr,"%d",&n);
        printf("%d",n);
    }
    fclose(fptr);
    fptr=fopen("abc.txt","w");
    int o=10;
    fprintf(fptr,"%d",o);
    fclose(fptr);
    return 0;

}