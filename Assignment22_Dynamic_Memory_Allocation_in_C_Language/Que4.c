#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *t,ch;
    int i=0,j=1;
    t=(char*)malloc(sizeof(char));
    printf("Enter some text : ");
    while(ch!='\n')
    {
        ch=getc(stdin);
        j++;
        t=(char*)realloc(t,j*sizeof(char));
        t[i]=ch;
        i++;
    }
    t[i]='\0';
    printf("%s",t);
    free(t);
    return 0;
}