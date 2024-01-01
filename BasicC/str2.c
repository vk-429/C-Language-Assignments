#include<stdio.h>
int main()
{
    int a[256]={0};
    char str[]="abcfgffgzsgf";
    int i;
    for(i=0;str[i];i++)
        a[str[i]]++;
    int max=-99999999;
    char ch;
    for(i=0;i<256;i++)
        if(max<a[i])
        {
            max=a[i];
            ch=i;
        }
    printf("Highest frequency character is %c with frequency %d",ch,max);
    return 0;
}