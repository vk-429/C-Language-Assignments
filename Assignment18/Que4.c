#include<stdio.h>
void upper(char[]);
int main()
{
    char str[100];
    upper(str);
    return 0;
}
void upper(char s[])
{
    int i;
    printf("Enter string : ");
    fgets(s,100,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
        printf("%c",s[i]);
    }
}