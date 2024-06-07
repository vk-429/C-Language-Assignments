#include<stdio.h>

int main()
{
    char str[20]="Siyaram";
    int i;
    for(i=0;str[i];i++);
    printf("Length of string is %d",i);
    return 0;
}
