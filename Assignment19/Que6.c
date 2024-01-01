#include<stdio.h>

int main()
{
    char SL[10][50];
    printf("Enter 10 strings : ");
    int i;
    for(i=0;i<10;i++)
        fgets(SL[i],50,stdin);
    int a[10],j;
    for(i=0;i<10;i++)
    {
        for(j=0;SL[i][j];j++);
        a[i]=j-1;
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<((a[i]+1)/2);j++)
        {
            if(SL[i][j]==SL[i][a[i]-(j+1)])
                continue;
            else
                break;
        }
        if(j==(a[i]+1)/2)
            printf("%s",SL[i]);
    }  
    return 0;
}