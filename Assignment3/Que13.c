#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%6==0)
        printf("Given number is divisible by 2 and 3");
    else
        printf("Given number is either not divisible by 2 or by 3 or not divisible by boh 2 and 3");
    return 0;
}