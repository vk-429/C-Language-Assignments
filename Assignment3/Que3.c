#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    n%2==0?printf("Even number"):printf("Odd number");
    return 0;
}