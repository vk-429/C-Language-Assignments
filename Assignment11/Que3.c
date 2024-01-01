#include<stdio.h>
int checkPrime(int);
int main()
{
    int n,x;
    printf("Enter any number : ");
    scanf("%d",&n);
    x=checkPrime(n);
    if(x==2||n==1)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
int checkPrime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    return count;
}