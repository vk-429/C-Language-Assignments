#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter string : ");
    fgets(str,100,stdin);
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
    }
    printf("Total no. of vowels is %d",count);
    return 0;
}