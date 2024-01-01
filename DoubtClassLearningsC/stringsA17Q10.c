#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str,50,stdin);
    int i=0,a[256]={0};
    while(i<strlen(str)-1)
        a[str[i++]]++;
    for(i=0;i<250;i++)
    {
        if(a[i]!=0)
            printf("Frequency of %c is %d\n",i,a[i]);
    }
    return 0;
}