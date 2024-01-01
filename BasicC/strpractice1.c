#include<stdio.h>
int main()
{
    char *str="hello world";
    char s[]="hello world";
    puts(s);
    puts(str);
    str="how are you";
    puts(str);
    s[7]='m';
    puts(s);
    return 0;
}