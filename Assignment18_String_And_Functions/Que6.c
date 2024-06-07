#include<stdio.h>
#include<string.h>
int checkAN(char[]);
int main()
{
    char str[100],r;
    r=checkAN(str);
    if(r==1)
        printf("String is alphanumeric");
    else
        printf("String is not alphanumeric");
    return 0;
}
int checkAN(char s[])
{
    int i,f1=0,f2=0;
    printf("Enter string : ");
    fgets(s,100,stdin);
    s[strlen(s)-1]='\0';
    for(i=0;s[i];i++)
    {
        if(s[i]==' ')continue;
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            f1=1;
        if(s[i]>='0'&&s[i]<='9')
            f2=1;
        if(f1==1 || f2==1)
        {
            f1=0;f2=0;
            continue;
        }
        else
            return 0;
    }
    return 1;
}