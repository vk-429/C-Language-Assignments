#include<stdio.h>
#include<string.h>
void swap(char*s1,char*s2)
{
    int i,l1,l2;
    char temp[50];
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1-1;i++)
        temp[i]=s1[i];
    temp[i]='\0';
    for(i=0;i<l2-1;i++)
        s1[i]=s2[i];
    s1[i]='\0';
    for(i=0;i<l1-1;i++)
        s2[i]=temp[i];
    s2[i]='\0';
}
int main()
{
    char str1[50],str2[50];
    printf("Enter 1st string : ");
    fgets(str1,50,stdin);
    fflush(stdin);
    printf("Enter 2nd string : ");
    fgets(str2,50,stdin);
    swap(str1,str2);
    printf("Result after swapping :-\n1st string = %s\n2nd string = %s",str1,str2);
    return 0;
}