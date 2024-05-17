#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    static int count;
    int key;
    char ch,key1;
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15,ans16,ans17,ans18,ans19,ans20;
    char name[30];
    printf("This quiz game contains total 20 questions\n");
    printf("You get 1 point for each correct answer\n");
    printf("There is no negative marking for incorrect answers\n");
    printf("Press any key to continue\n");
    ch=getch();
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
        scanf("%[^\n]s",name);
        fprintf(fptr,"%s\n",name);
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
            printf("The correct answer is 4\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
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
        scanf("%d",&ans2);
        if(ans2==3)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans2==1||ans2==2||ans2==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 3\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q3.txt","r");
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
        scanf("%d",&ans3);
        if(ans3==4)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans3==1||ans3==2||ans3==3)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 4\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q4.txt","r");
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
        scanf("%d",&ans4);
        if(ans4==3)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans4==1||ans4==2||ans4==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 3\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q5.txt","r");
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
        scanf("%d",&ans5);
        if(ans5==1)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans5==2||ans5==3||ans5==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 1\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q6.txt","r");
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
        scanf("%d",&ans6);
        if(ans6==2)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans6==1||ans6==3||ans6==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 2\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q7.txt","r");
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
        scanf("%d",&ans7);
        if(ans7==2)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans7==1||ans7==3||ans7==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 2\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q8.txt","r");
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
        scanf("%d",&ans8);
        if(ans8==1)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans8==2||ans8==3||ans8==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 1\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q9.txt","r");
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
        scanf("%d",&ans9);
        if(ans9==3)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans9==1||ans9==2||ans9==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 3\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q10.txt","r");
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
        scanf("%d",&ans10);
        if(ans10==3)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans10==1||ans10==2||ans10==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 3\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q11.txt","r");
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
        scanf("%d",&ans11);
        if(ans11==1)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans11==2||ans11==3||ans11==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 1\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q12.txt","r");
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
        scanf("%d",&ans12);
        if(ans12==1)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans12==2||ans12==3||ans12==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 1\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q13.txt","r");
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
        scanf("%d",&ans13);
        if(ans13==4)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans13==1||ans13==2||ans13==3)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 4\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q14.txt","r");
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
        scanf("%d",&ans14);
        if(ans14==4)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans14==1||ans14==2||ans14==3)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 4\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q15.txt","r");
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
        scanf("%d",&ans15);
        if(ans15==1)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans15==2||ans15==3||ans15==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 1\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q16.txt","r");
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
        scanf("%d",&ans16);
        if(ans16==2)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans16==1||ans16==3||ans16==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 2\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q17.txt","r");
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
        scanf("%d",&ans17);
        if(ans17==3)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans17==1||ans17==2||ans17==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 3\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q18.txt","r");
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
        scanf("%d",&ans18);
        if(ans18==2)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans18==1||ans18==3||ans18==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 2\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q19.txt","r");
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
        scanf("%d",&ans19);
        if(ans19==2)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans19==1||ans19==3||ans19==4)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 2\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to proceed to next question\n");
        key1=getch();
        system("cls");
        fptr=fopen("q20.txt","r");
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
        scanf("%d",&ans20);
        if(ans20==4)
        {
            count++;      
            printf("Your answer is correct\n");
        }
        else if(ans20==1||ans20==2||ans20==3)
        {
            printf("Your answer is incorrect\n");
            printf("The correct answer is 4\n");
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
        printf("Press any key to see your score\n");
        key1=getch();
        system("cls");
        if(count>=8)
        {
        printf("Congratulations!!,%s",name);
        printf("\nYou have scored %d points",count);
        }
        else
        {
        printf("%s,You have scored %d points",name,count);
        }
        printf("\nIncorrect answer=%d",20-count);
        FILE *fptr;
        fptr=fopen("quiz.txt","a");
        fprintf(fptr,"Score:%d",count);
        fclose(fptr);
    }
    return 0;
}


