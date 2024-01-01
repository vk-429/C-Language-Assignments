#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count=0;
    while(n)
    {
        n/=10;
        count++;
    }
    printf("Number of digits is %d",count);
    return 0;
}