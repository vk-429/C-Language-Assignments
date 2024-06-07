#include<stdio.h>

int main()
{
    int n,x;
    printf("Enter any number : ");
    scanf("%d",&n);
    x=(n-1)/2;
    if(x==n/2)
        printf("Odd number");
    else
        printf("Even number");
    return 0; 
}