#include<stdio.h>
int countdigit(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("No. of digits is %d",countdigit(n));
    return 0;
}
int countdigit(int n)
{
    if(n==0)
        return 0;
    if(n!=0)
        return countdigit(n/10)+1;
}