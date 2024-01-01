#include<stdio.h>
int main()
{
    char str[]="How are you";
    for(int i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    puts(str);
    return 0;
}