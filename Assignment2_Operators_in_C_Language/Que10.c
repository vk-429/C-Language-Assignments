#include<stdio.h>

int main()
{
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    x/=10;
    x*=10;
    printf("Required answer is %d",x);
    return 0;
}