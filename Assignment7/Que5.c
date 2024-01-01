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
    if(b==1)
        printf("%d and %d are co-prime",a1,b1);    
    else
        printf("%d and %d are not co-prime",a1,b1);
    return 0;
}