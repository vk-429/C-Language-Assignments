#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter string : ");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int i,j;
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
            if(str[i]>str[j])
            {
                str[i]=str[i]+str[j];
                str[j]=str[i]-str[j];
                str[i]=str[i]-str[j];
            }
        }
        printf("%c",str[i]);
    }
    return 0;
}