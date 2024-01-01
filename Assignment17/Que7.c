#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter string : ");
    fgets(str,100,stdin);
    int i,a=0,d=0,sc=0;
    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            a++;
        else if(str[i]>='0'&&str[i]<='9')
            d++;
        else
            sc++;
    }
    printf("Total no. of alphabets = %d\nDigits = %d\nSpecial characters = %d",a,d,sc-1);
    return 0;
}