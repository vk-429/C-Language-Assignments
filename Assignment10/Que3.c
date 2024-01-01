#include<stdio.h>
int checkEvenOdd(int);
int main()
{
    int n,x;
    printf("Enter any number : ");
    scanf("%d",&n);
    x=checkEvenOdd(n);
    if(x==1)
        printf("Even number");
    else 
        printf("Odd number");
    return 0;
}
int checkEvenOdd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}