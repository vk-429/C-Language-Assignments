#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n>99&&n<1000)
        printf("Given number is a three digit number");
    
    else
        printf("Given number is not a three digit number");
    
    return 0;
}