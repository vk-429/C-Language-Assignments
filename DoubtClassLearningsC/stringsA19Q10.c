#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char list[3][2][20]={{"Prateek","123"},{"MySirG","456"},{"Aditya","321"}};
    int i,choice,flag=0;
    char UN[20],PW[20];
    int r1,r2;
    while(1)
    {
        printf("1. Login to your account\n");
        printf("2. Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
            printf("Enter username : ");
            scanf("%s",UN);
            printf("Enter password : ");
            scanf("%s",PW);
            for(i=0;i<3;i++)
            {

                r1=strcmp(list[i][0],UN);
                r2=strcmp(list[i][1],PW);
                if(r1==0&&r2==0)
                {
                    flag=1;
                    printf("You have successfully logged in.\n");
                    printf("welcome to your account!");
                    exit(0);
                }
            }
            if(flag==0)
                printf("Username or password did'nt match !\n\n");
            break;
            case 2 :
            exit(0);
        }
    }
    return 0;
}