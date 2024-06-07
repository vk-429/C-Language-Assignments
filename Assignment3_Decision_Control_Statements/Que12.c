#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("Lowercase");
    else if(ch>='A'&&ch<='Z')
        printf("Upercase");
    else    
        printf("Not an alphabet");
    return 0;
}