#include<stdio.h>
void printReverse(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printReverse(n);
    return 0;
}
void printReverse(int n)
{
    int r;
    if(n>0)
    {
        r=n%10;
        n/=10;
        printf("%d",r);
        printReverse(n);
    }
}