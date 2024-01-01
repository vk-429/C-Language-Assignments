#include<stdio.h>

int main()
{
    char EL[5][50];
    printf("Enter 5 emails : ");
    int i,j,count=0;
    for(i=0;i<5;i++)
        fgets(EL[i],50,stdin);
    for(i=0;i<5;i++)
    {
        for(j=0;EL[i][j];j++)
        {
            if(EL[i][j]=='@')
                break;
        }
        if(EL[i][j]=='\0')
        {
            printf("%s",EL[i]);
            count++;
        }
    }
    if(count==0)
        printf("All emails have @");
    return 0;
}