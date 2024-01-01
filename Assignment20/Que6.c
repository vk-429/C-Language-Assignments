#include<stdio.h>

int main()
{
    char str[50],*p;
    p=str;
    int i;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;*(p+i);i++);
    printf("Length of the strinhg is %d",i-1);
    return 0;
}