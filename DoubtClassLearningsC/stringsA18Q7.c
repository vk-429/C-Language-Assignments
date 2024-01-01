#include<stdio.h>
#include<string.h>
void polindrome(char[]);
int main()
{
    char str[50];
    polindrome(str);
    return 0;
}
void polindrome(char S[])
{
    printf("Enter the string : ");
    fgets(S,50,stdin);
    int i=0,j=strlen(S)-2;
    while(i<=j)
    {
        if(S[i]!=S[j])
            break;
        i++;
        j--;
    }
    if(i>j)
        printf("String is polindrome");
    else
        printf("String is not polindrome");
}