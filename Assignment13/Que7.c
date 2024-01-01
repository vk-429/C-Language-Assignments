#include<stdio.h>
int calcHCF(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d",a,b,calcHCF(a,b));
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
    if(a!=0)
    {
        temp=a;
        a=b%a;
        b=temp;
        calcHCF(a,b);
    }
    if(a==0)
        return b;
    
}