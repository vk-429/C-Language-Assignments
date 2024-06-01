#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p,ch;
    int i=0,j=1;
    p=(char*)malloc(sizeof(char));
    printf("Enter the string : ");
    while(ch!='\n')
    {
        ch=getc(stdin);
        j++;
        p=(char*)realloc(p,j*sizeof(char)); // also it will contain the previous data of p
        p[i]=ch;
        i++;
    }
    p[i]='\0';
    printf("%s",p);
    free(p);
    return 0;
}