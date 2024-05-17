#include<stdio.h>
struct book{
    char name[20];
    float price;
    char author[100];
};
int main()
{
    struct book b;
    FILE *fptr;
    fptr=fopen("book.txt","w");
    printf("Enter the name of book,price and author name:");
    scanf("%s%f%s",b.name,&b.price,b.author);
    fprintf(fptr,"%s\n",b.name);
    fprintf(fptr,"%f\n",b.price);
    fprintf(fptr,"%s\n",b.author);
    fclose(fptr);
    fptr=fopen("book.txt","r");
    fscanf(fptr,"%s",b.name);
    fscanf(fptr,"%f",&b.price);
    fscanf(fptr,"%s",b.author);
    printf("The name of book is %s\n",b.name);
    printf("The price of book is %f\n",b.price);
    printf("The author of book is %s\n",b.author);
    fclose(fptr);
    return 0;
}
