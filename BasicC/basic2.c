#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fd,ld;
    ld=n%10;
    while(n/=10)
        if(n<10)fd=n;
    printf("1st digit = %d\nLast digit = %d",fd,ld);
    return 0;
}