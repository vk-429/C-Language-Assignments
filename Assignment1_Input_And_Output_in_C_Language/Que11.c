#include<stdio.h>

int main()
{
    int hour,minute;
    printf("Enter the time : ");
    scanf("%d:%d",&hour,&minute);
    printf("%02d hour and %02d minute",hour,minute);
    return 0;
}