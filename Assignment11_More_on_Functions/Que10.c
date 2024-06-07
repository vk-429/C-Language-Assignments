#include<stdio.h>
void printSum(int);
int calcFact(int);
int main()
{
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printSum(n);
    return 0;
}
void printSum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+(calcFact(i)/i);
    }
    printf("Sum is %d",sum);
}
int calcFact(int i)
{
    int fact=1;
    if (i==1)
        return 1;
    for(int j=2;j<=i;j++)
    {
        fact=fact*j;
    }
    return fact;
}