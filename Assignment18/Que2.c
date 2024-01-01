#include<stdio.h>
void reverseS(char[]);
int main()
{
    char s1[100];
    reverseS(s1);
    return 0;
}
void reverseS(char s2[])
{
    printf("Enter string : ");
    fgets(s2,100,stdin);
    int i,j;
    for(i=0;s2[i];i++);
    for(j=i-2;j>=0;j--)
        printf("%c",s2[j]);
}