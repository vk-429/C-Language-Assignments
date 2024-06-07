#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%3==0||n%7==0)
        printf("Given number is either divisible by 3 or 7");
    else
        printf("Given number is neither divisible by 3 nor by 7");
    return 0;
}