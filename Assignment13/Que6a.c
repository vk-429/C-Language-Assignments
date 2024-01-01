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
    if(n==0||n==1)
        return 1;
    return(n*calcFact(n-1));
}