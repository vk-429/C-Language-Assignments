#include<stdio.h>
int calcHCF(int,int);
int main()
{
    int x,y,HCF;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    HCF=calcHCF(x,y);
    printf("HCF of %d and %d is %d",x,y,HCF);
    return 0;
}
int calcHCF(int a,int b)
{
    int temp;
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
    return b;
}