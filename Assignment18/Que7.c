#include<stdio.h>
int checkPD(char[]);
int main()
{
    char str[100],r;
    r=checkPD(str);
    if(r==1)
        printf("String is palindrome");
    if(r==0)
        printf("String is not palindrome");
    return 0;
}
int checkPD(char s[])
{
    int i,j,K;
    printf("Enter string : ");
    fgets(s,100,stdin);
    for(i=0;s[i];i++);
    for(j=0;j<=(i/2-1);j++)
    {
        if(s[j]==s[(i-2)-j])
            continue;
        else
            break;
    }
    if(j==(i)/2)
        return 1;
    else
        return 0;
}