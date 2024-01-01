#include<stdio.h>

int main()
{
    char S[5][50];
    int i,j,a[5]={0};
    printf("Enter 5 strings : ");
    for(i=0;i<5;i++)
        fgets(S[i],50,stdin);
    for(i=0;i<5;i++)
    {
        for(j=0;S[i][j];j++)
        {
            if(S[i][j]=='a'||S[i][j]=='e'||S[i][j]=='i'||S[i][j]=='o'||S[i][j]=='u'||S[i][j]=='A'||S[i][j]=='E'||S[i][j]=='I'||S[i][j]=='O'||S[i][j]=='U')
                a[i]++;
        }
    }
    for(i=0;i<5;i++)
        printf("String %d has %d vowels\n",i,a[i]);
    return 0;
}