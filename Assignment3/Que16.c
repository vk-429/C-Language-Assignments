#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("Lowercase Alphabet");
    else if(ch>='A'&&ch<='Z')
        printf("Upercase Alphabet");
    else if(ch>='1'&&ch<='9')
        printf("Digit");
    else
        printf("Special character");
    return 0;
}