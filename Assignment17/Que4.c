#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter string : ");
    fgets(str,100,stdin);
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }
    printf("%s",str);
    return 0;
}