#include<stdio.h>
void strrevWW(char[]);
int main()
{
    char str[100];
    strrevWW(str);
    return 0;
}
void strrevWW(char S[])
{
    printf("Enter string : ");
    fgets(S,100,stdin);
    int i,count=1,j,k=0;
    for(i=0;S[i];i++)
    {
        if(S[i]==32)
            count++;
    }
    char S1[count][20];
    for(i=0;i<count;i++)
    {
        j=0;
        while(S[k]!=32)
        {
            if(S[k]==10)
                break;
            S1[i][j]=S[k];
            k++;
            j++;
        }
        S1[i][j]='\0';
        k++;
    }
    for(i=count-1;i>=0;i--)
        printf("%s ",S1[i]);
}