#include<stdio.h>
int calcSum(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum is %d",calcSum(n));
    return 0;
}
int calcSum(int n)
{
    int sum;
    if(n==1)
    return 1;
    sum=n+calcSum(n-1);
    return sum;
}
