#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str,50,stdin);
    printf("After reversing the case of letters : ");
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
        else if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
        printf("%c",str[i]);
    }
    return 0;
}