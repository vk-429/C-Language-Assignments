#include<stdio.h>
void reverseS(char[]);
int main()
{
    char s1[100];
    printf("Enter string : ");
    fgets(s1,100,stdin);
    reverseS(s1);
    printf("%s\n",s1);
    return 0;
}
void reverseS(char s2[])
{
    int i,j;
    char s[100];
    for(i=0;s2[i];i++)
        s[i]=s2[i];
    i--;
    s[i]='\0';
    int k=0;
    for(j=i-1;j>=0;j--)
    {
        s2[k]=s[j];
        k++;
    }
    s2[k]='\0';
}