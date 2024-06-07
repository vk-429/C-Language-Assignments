#include<stdio.h>

int main()
{
    int a,b,*p,*q;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    if(*p>*q)
        printf("Maximum number is %d",*p);
    else
        printf("Maximum number is %d",*q);
    return 0;
}