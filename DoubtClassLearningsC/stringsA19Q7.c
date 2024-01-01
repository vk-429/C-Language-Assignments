#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ip[4][20],temp[4][20];
    int i;
    printf("Enter the list of ip addresses : ");
    for(i=0;i<4;i++)
    {
        fgets(ip[i],20,stdin);
        ip[i][strlen(ip[i])-1]='\0';
        strcpy(temp[i],ip[i]);
    }
    char *a[4];
    int c[4]={0},flag=0;
    for(i=0;i<4;i++)
    {
        a[i]=strtok(ip[i],".");
        while(a[i]!=NULL)
        {
            int x=atoi(a[i]);
            if((x>=0)&&(x<=255))
                c[i]++;
            a[i]=strtok(NULL,".");
        }
        if(c[i]!=4)
        {
            printf("%s\n",temp[i]);
            flag++;
        }
    }
    if(flag==0)
        printf("All ip adresses are valid");
    return 0;
}