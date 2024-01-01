#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    printf("Login to your account\n");
    printf("You have 3 attempts\n");
    int i,r1,r2;
    char password[20]="v1@i2v356",username[20]="vk_123",UN[20],PW[20];
    for(i=1;i<=3;i++)
    {
        printf("Enter username : ");
        scanf("%s",UN);
        printf("Enter password : ");
        scanf("%s",PW);
        r1=strcmp(username,UN);
        r2=strcmp(password,PW);
        if(r1==0&&r2==0)
        {
            printf("You have successfully logged in.\n");
            printf("welcome to your account!");
            exit(0);
        }
        if(i==3)
            break;
        if(r1!=0&&r2==0)
            printf("Username entered is incorrect\nPlease try again!\n");
        if(r2!=0&&r1==0)
                printf("Password entered is incorrect\nPlease try again!\n");
        if(r1!=0&&r2!=0)
            printf("Username and Password both are incorrect\nPlease try again!\n");
        if(i==1)
            printf("Only 2 attempts are left!\n");
        if(i==2)
            printf("Only 1 attempt is left!\n");
    }
    if(i==3)
        printf("Authentication failed!");
    return 0;
}