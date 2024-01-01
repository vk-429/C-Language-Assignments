#include<stdio.h>
void lower(char[]);
int main()
{
    char str[100];
    lower(str);
    return 0;
}
void lower(char s[])
{
    int i;
    printf("Enter string : ");
    fgets(s,100,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]+=32;
        printf("%c",s[i]);
    }
}