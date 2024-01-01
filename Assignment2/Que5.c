#include<stdio.h>

int main()
{
    int n,d1,d2,d3;
    printf("Enter a three digit number : ");
    scanf("%d",&n);
    d1=n%10;
    n=n/10;
    d2=n%10;
    d3=n/10;
    printf("Sum of the digits is %d",d1+d2+d3);
    return 0;
}