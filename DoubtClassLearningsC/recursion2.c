#include<stdio.h>
int HCF(int a,int b)
{
    if(b==0)
        return a;
    HCF(b,a%b);
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    if(b>a)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("HCF of given numbers is %d",HCF(a,b));
    return 0;
}