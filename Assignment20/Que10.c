#include<stdio.h>

int main()
{
    char str[40],*p;
    p=str;
    printf("Enter the string : ");
    fgets(str,40,stdin);
    int i;
    for(i=0;*(p+i);i++);
    for(i=i-2;i>=0;i--)
        printf("%c",*(p+i));
    return 0;
}