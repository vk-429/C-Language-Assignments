#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    
    printf("Enter your name : ");
    fgets(str,20,stdin);
    strupr(str);
    printf("Hello %s",str);
    return 0;
}