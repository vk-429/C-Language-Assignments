#include<stdio.h>
int calcSD(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,calcSD(n));
    return 0;
}
int calcSD(int n)
{
    int sum=0,r;
    if(n>0)
    {
        r=n%10;
        n=n/10;
        sum=calcSD(n)+r;
    }
    return sum;
}