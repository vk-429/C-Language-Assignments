#include<stdio.h>

int main()
{
    int n;
    printf("Enter a three digit number : ");
    scanf("%d",&n);
    n=100*(n%10)+n/10;
    printf("Required answer is %d",n);
    return 0;
}