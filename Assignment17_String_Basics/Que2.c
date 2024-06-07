#include<stdio.h>

int main()
{
    char str[100],ch;
    int i,count=0;
    printf("Enter string : ");
    fgets(str,100,stdin);
    printf("Enter character : ");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("Given character occured %d times",count);
    return 0;
}