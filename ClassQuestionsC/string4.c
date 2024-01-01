#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter your name : ");
    fgets(str,20,stdin);
    printf("Hello %s",str);
    return 0;
}