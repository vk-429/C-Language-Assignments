#include<stdio.h>
#include<stdbool.h>
bool checkPrime(int);
int main()
{
    int n;
    bool x;
    printf("Enter any number : ");
    scanf("%d",&n);
    x=checkPrime(n);
    if(x==true)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
bool checkPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
             return false;
    }
    if(n==1) return false;
    return true;
}