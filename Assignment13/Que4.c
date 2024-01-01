#include<stdio.h>
int calcSumSQR(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum is %d",calcSumSQR(n));
}
int calcSumSQR(int n)
{
    int sum;
    if(n==1)
        return 1;
    sum=(n*n)+calcSumSQR(n-1);
        return sum;
}