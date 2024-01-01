#include<stdio.h>

int main()
{
    char str[100],str1[100];
    printf("Enter string : ");
    fgets(str,100,stdin);
    int i,count=0;
    for(i=0;str[i];i++)
    {
        str1[i]=str[i];
        count++;
    }
    for(i=0;i<count-1;i++)
        printf("%c",str1[i]);
    return 0;
}