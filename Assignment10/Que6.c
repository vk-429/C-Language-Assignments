#include<stdio.h>
int calcFact(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,calcFact(n));
    return 0;
}
int calcFact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}