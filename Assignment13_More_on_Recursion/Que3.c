#include<stdio.h>
int calcSumEVEN(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum is %d",calcSumEVEN(n));
}
int calcSumEVEN(int n)
{
    int sum;
    if(n==1)
        return 2;
    sum=(2*n)+calcSumEVEN(n-1);
        return sum;
}