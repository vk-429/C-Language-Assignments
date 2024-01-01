#include<stdio.h>
int compare(char[],char[]);
int main()
{
    char str1[100],str2[100];
    printf("%d",compare(str1,str2));
    return 0;    
}
int compare(char s1[],char s2[])
{
    int i;
    printf("Enter 1st string : ");
    fgets(s1,100,stdin);
    printf("Enter 2nd string : ");
    fgets(s2,100,stdin);
    for(i=0;s1[i]||s2[i];i++)
    {
        if(s1[i]>s2[i])
            return 1;
        if(s1[i]<s2[i])
            return -1;
        if(s1[i]==s2[i])
            continue;
    }
    if(s1[i]==0&&s2[i]!=0)
        return -1;
    if(s2[i]==0&&s1[i]!=0)
        return 1;
    if(s1[i]==0&&s2[i]==0)
        return 0;
}