#include<stdio.h>
#include<string.h>
//Reversing a string
int main()
{
    char str[50],t;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    int i=0,j=strlen(str)-1;
    while(i<=j)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
    printf("%s",str);
    return 0;
}