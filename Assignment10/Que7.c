#include<stdio.h>
int calcComb(int);
int main()
{
    int n,r;
    printf("Enter values of n and r(n>r) : ");
    scanf("%d%d",&n,&r);
    printf("Number of possible combinations is %d",calcComb(n)/(calcComb(r)*calcComb(n-r)));
    return 0;
}
int calcComb(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}