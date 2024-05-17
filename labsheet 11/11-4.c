/*WAP to define a structure employee with members empno, name, salary and
address. Main() should always ask input for the particular function call until user
exits the program. Create binary file employee.dat and functions as below:
a. AddRecord(): To add record of employee in the file.
b. DisplayRecord(): To display all the records from the file.
c. UpdateRecord(): To update the particular salary of the employee in the file.
d. DeleteRecord(): To delete the particular record of employee from the file*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void AddRecord();
void DisplayRecord();
void UpdateRecord();
void DeleteRecord();
void delay(int);
FILE *fptr, *tempfptr;
typedef struct employee
{
    int empno;
    char name[50];
    float salary;
    char address[50];
} e;
e emp;
int main()
{
    int ch;
    system("COLOR 0B");
    printf("\n\n\n\n\n\n\n\n\t\t\tWELCOME TO THE PROGRAM!!!");
    printf("\n\n\n\t\t\tPress any key to continue...");
    getch();
    while (1)
    {
        system("cls");
        printf("\n\t\tEMPLOYEE RECORD MANAGEMENT SYSTEM\n\n");
        printf("\n\n\t\t[1] Write records to the file.\n");
        printf("\t\t[2] Read records from the file.\n");
        printf("\t\t[3] Update Salary.\n");
        printf("\t\t[4] Delete the particular record.\n");
        printf("\t\t[5] Exit the program.\n");
        printf("\t\t___________________________________________\n\n");
        printf("\n\t\t\t Enter your choice (1-5):\t");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            AddRecord();
            break;
        case 2:
            DisplayRecord();
            break;
        case 3:
            UpdateRecord();
            break;
        case 4:
            DeleteRecord();
            break;
        case 5:
            system("cls");
            printf("\n\n\n\n\n\n\n\n\t\tThank you for using this program(^_^)");
            delay(400000000);
            exit(0);
            break;
        default:
            system("cls");
            printf("\n\n\t\tThe Choice You Entered Is Invalid");
            delay(400000000);
            break;
        }
    }
}
void delay(int j)
{
    int i, k;
    for (i = 1; i <= j; i++)
    {
        k = i;
    }
}
void AddRecord()
{
    system("cls");
    char ch;
    fptr = fopen("employee.bin", "ab");
    if (fptr == NULL)
    {
        printf("File Cannot be Opened");
        exit(0);
    }
    printf("\n\t<===================== Write Mode ========================>\n");
    do
    {
        printf("\n\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("\n\t\tEnter your emp number\t\t: ");
        scanf("%d", &emp.empno);
        printf("\t\tEnter your name\t\t\t: ");
        scanf("%s", &emp.name);
        printf("\t\tEnter your address\t\t: ");
        scanf("%s", &emp.address);
        printf("\t\tEnter your salary\t\t: ");
        scanf("%f", &emp.salary);
        fwrite(&emp, sizeof(emp), 1, fptr);
        // fprintf(fptr, "\n%d\t%s\t%s\t%f", emp[a].empno, emp[a].name, emp[a].address, emp[a].salary);
        printf("\n\t\tRecord added sucessfully !!!\n\t\tEnter e to exit\t: ");
        ch = getche(); // It does not use any buffer to store the input character.
    } while (ch != 'e');
    fclose(fptr);
}
void DisplayRecord()
{
    system("cls");
    printf("\n\t<============================ Read Mode ===============================>\n");
    fptr = fopen("employee.bin", "rb");
    if (fptr == NULL)
    {
        printf("File Cannot be Opened");
        getch();
        exit(0);
    }
    printf("\n\tEMP. NUMBER\tNAME\t\t\tADDRESS\t\t\tSALARY\n");
    printf("\t_______________________________________________________________________\n");
    while (fread(&emp, sizeof(emp), 1, fptr) == 1)
    {
        printf("\n\t%d\t\t%s\t\t\t%s\t\t%.2f", emp.empno, emp.name, emp.address, emp.salary);
    }
    printf("\n\t_______________________________________________________________________\n");
    fclose(fptr);
    getch();
}
void UpdateRecord()
{
    int id, count = 0;
    system("cls");
    printf("\n\t<============================ Update Mode ===============================>\n");
    printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    fptr = fopen("employee.bin", "r+b");
    if (fptr == NULL)
    {
        printf("File cannot be opened\n");
    }
    printf("\n\tEnter Employee No. whose salary is to be increased\t: ");
    scanf("%d", &id);
    while (fread(&emp, sizeof(emp), 1, fptr) == 1)
    {
        if (emp.empno == id)
        {
            printf("\tEnter new salary of %s\t\t: ", emp.name);
            scanf("%f", &emp.salary);
            fseek(fptr, -sizeof(emp), SEEK_CUR);
            fwrite(&emp, sizeof(emp), 1, fptr);
            printf("\n\tRecord Updated!!!");
            count++;
            break;  
        }
        
    }
    if (count == 0)
            printf("\n\tRecord not found!!!");
    fclose(fptr);
    getch();

}
void DeleteRecord()
{
    system("cls");
    printf("\n\t<===================== Delete Mode ========================>\n");
     printf("\n\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    int id,count=0;
    fptr = fopen("employee.bin", "rb");
    tempfptr=fopen("temp.bin","wb");
    printf("\n\tEnter Employee no whoose data is to be deleted\t: ");
    scanf("%d",&id);
    while(fread(&emp,sizeof(emp),1,fptr)==1)
    {
        if(emp.empno!=id)
        {
            fwrite(&emp,sizeof(emp),1,tempfptr);
            count++;
        }
        else
        printf("\tEmployee number %d's record has been deleted!!",emp.empno);
    }
    if(count==0)
    {
        printf("\tRecord not found!!");
    }
    fclose(fptr);
    fclose(tempfptr);
    fptr = fopen("employee.bin", "wb");
    tempfptr=fopen("temp.bin","rb");
    while(fread(&emp,sizeof(emp),1,tempfptr))
    {
        fwrite(&emp,sizeof(emp),1,fptr);
    }
    fclose(fptr);
    fclose(tempfptr);
    getch();
}