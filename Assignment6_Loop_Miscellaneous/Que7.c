#include<stdio.h>

int main()
{
    int n,i,count=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n)
    {
        n/=10;
        count++;
    }
    printf("Number of digits in the given number is %d",count);
    return 0;
}