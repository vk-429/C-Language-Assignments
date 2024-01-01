#include<stdio.h>

int main()
{
    char str[5];
    str[0]='v';
    str[1]='i';
    str[2]='\0 ';
    str[3]='v';
    str[4]='k';
    for(int i=0;i<5;i++)
        printf("%c",str[i]);
    return 0;
}