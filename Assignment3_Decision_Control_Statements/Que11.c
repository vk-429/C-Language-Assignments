#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter marks of five subjects(each <=100) : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
        printf("congratulations, You passed the examination");
    else
        printf("You failed, better luck next time");
    return 0;
}