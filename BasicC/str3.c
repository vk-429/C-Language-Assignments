#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter a string : ");
    fgets(str,20,stdin);
    printf("After removing blank space : ");
    for(int i=0;str[i];i++)
    {
        if(str[i]==32)
            continue;
        printf("%c",str[i]);
    }
    return 0;
}