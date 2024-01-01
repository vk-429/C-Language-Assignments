#include<stdio.h>
void printBinary(int);
int main()
{
    int n;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    printBinary(n);
    return 0;
}
void printBinary(int n)
{
    int x;
    if(n>0)
    {
    x=n%2;
    n=n/2;
    printBinary(n);
    printf("%d ",x);
    }
}