#include<stdio.h>

int main()
{
    int a,b,temp,a1,b1;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    a1=a;
    b1=b;
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    while(a!=0)
    {
        temp=a;
        a=b%a;
        b=temp;
    }
    printf("HCF of %d and %d is %d",a1,b1,b);
    return 0;
}