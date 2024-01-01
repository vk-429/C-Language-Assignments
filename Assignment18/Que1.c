#include<stdio.h>
int calcL(char[]);
int main()
{
   char s1[100];
   printf("Length of the string is %d",calcL(s1));
   return 0; 
}
int calcL(char s2[])
{
    printf("Enter string : ");
    fgets(s2,100,stdin);
    int i;
    for(i=0;s2[i];i++);
    return i-1;
}