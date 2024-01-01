#include<stdio.h>
int calcSumODD(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum is %d",calcSumODD(n));
}
int calcSumODD(int n)
{
    int sum;
    if(n==1)
        return 1;
    sum=(2*n-1)+calcSumODD(n-1);
        return sum;
}