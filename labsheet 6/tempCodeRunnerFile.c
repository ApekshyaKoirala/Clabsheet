#include<stdio.h>
#include<stdlib.h>
int main()
{
    static int count;
    int key;
    char ch,key1,key2,key3,key4,key5,key6,key7,key8,key9,key10;
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    char name[30];
    printf("This quiz game contains total 10 questions\n");
    printf("You get 1 mark for each correct answer\n");
    printf("There is no negative marking for incorrect answers\n");
    printf("Press any key to continue\n");
    scanf("%c",&ch);
    FILE *fptr;
    fptr=fopen("quiz.txt","w");
    system("cls");
    if(fptr==NULL)
    {
        printf("File cannot be opened");
        exit(0);
    }
    else
    {
        printf("Enter your name:");
        scanf("%s",name);
        fputs(name,fptr);
        fgets(name,30,fptr);
        printf("The quiz game is about to begin\n");
    }
    fclose(fptr);
    printf("Press 1 to continue and 0 to exit\n");
    scanf("%d",&key);
    if(key==0)
        exit(0);
    else if(key==1)
    {
        fptr=fopen("q1.txt","r");
        system("cls");
        if(fptr==NULL)
        {
            printf("File cannot be opened");
        }
        while(1)
        {
            ch=fgetc(fptr);
            if(ch==EOF)
                break;  
            printf("%c",ch);
        }
        fclose(fptr);
        printf("\nEnter your answer:");
        scanf("%d",&ans1);
        if(ans1==4)
        {      
            printf("Your answer is correct\n");
            count++;
        }
        else if(ans1==1||ans1==2||ans1==3)
        {
            printf("Your answer is incorrect\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press 1 to proceed to next question\n");
        scanf("%d",&key1);
        if(key1==1)
        {
        system("cls");
         fptr=fopen("q2.txt","r");
        system("cls");
        if(fptr==NULL)
        {
            printf("File cannot be opened");
        }
        while(1)
        {
            ch=fgetc(fptr);
            if(ch==EOF)
                break;  
            printf("%c",ch);
        }
        fclose(fptr);
        printf("\nEnter your answer:");
        scanf("%d",&ans1);
        if(ans1==3)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans1==1||ans1==2||ans1==4)
        {
            printf("Your answer is incorrect\n");
        }
        else
        {
            printf("Invalid input");
            abort();
        }
        }
        printf("Press any key to proceed to next question\n");
        scanf("%c",&key1);
        printf("You have scored %d marks",count);
    }
    return 0; 
}