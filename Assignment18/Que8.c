#include<stdio.h>
int countWord(char[]);
int main()
{
    char str[100];
    printf("Given string contains %d words",countWord(str));
    return 0;
}
int countWord(char s[])
{
    int i,count=1;
    printf("Enter string : ");
    fgets(s,100,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]==' ')
        {
            while(s[i]==' ')i++;
            i--;
            count++;
        }
    }
    return count;
}