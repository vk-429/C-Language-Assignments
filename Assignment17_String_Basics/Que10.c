#include<stdio.h>

int main()
{
    char str[100],a[256]={0};
    printf("Enter string : ");
    fgets(str,100,stdin);
    int i;
    for(i=0;str[i];i++)
    {
        a[str[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(a[i]!=0)
        printf("Frequency of %c is %d\n",i,a[i]);
    }
    return 0;
}