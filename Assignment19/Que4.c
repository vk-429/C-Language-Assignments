#include<stdio.h>

int main()
{
    char SL[10][50];
    printf("Enter 10 strings : ");
    int i,j,flag=0;
    for(i=0;i<10;i++)
        fgets(SL[i],50,stdin);
    char S[50];
    printf("Enter any string : ");
    fgets(S,50,stdin);
    for(i=0;i<10;i++)
    {
        for(j=0;S[j]||SL[i][j];j++)
        {
            if(S[j]==SL[i][j])
                continue;
            else
                break;
        }
        if((S[j]=='\0')&&(SL[i][j]=='\0'))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("String found");
    else
        printf("String not found");
    return 0;
}