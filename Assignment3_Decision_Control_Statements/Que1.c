#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n>0)
        printf("Number is positive.");
    else
        printf("Number is non-positive.");
    return 0;
}