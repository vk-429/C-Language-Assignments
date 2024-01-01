#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter string : ");
    fgets(str,100,stdin);
    int i;
    for(i=0;str[i];i++);
    for(i=i-2;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}