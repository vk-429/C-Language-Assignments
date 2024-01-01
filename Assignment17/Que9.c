#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter string : ");
    fgets(str,100,stdin);
    int i,j;
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
            if(str[j]==10)
                continue;
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