#include<stdio.h>
void printOct(int);
int main()
{
    int n;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    printOct(n);
    return 0;
}
void printOct(int n)
{
    int r;
    if(n>0)
    {
        r=n%8;
        n/=8;
        printOct(n);
        printf("%d",r);
    }
}