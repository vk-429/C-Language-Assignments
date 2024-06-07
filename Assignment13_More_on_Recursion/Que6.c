#include<stdio.h>
int calcFact(int);
int main()
{
    int n;
    printf("Enter a number ; ");
    scanf("%d",&n);
    printf("Factorial od %d is %d",n,calcFact(n));
    return 0;
}
int calcFact(int n)
{
    int fact;
    if(n==0||n==1)
        return 1;
    fact=n*calcFact(n-1);
    return fact;
}