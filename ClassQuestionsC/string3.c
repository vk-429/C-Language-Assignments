#include<stdio.h>

int main()
{
    char str[10]="BHOPAL";
    int i;
    //int i,count=0;
    for(i=0;str[i];i++);
        //count++;
    printf("Length of the string is %d",i);
    return 0;   
}