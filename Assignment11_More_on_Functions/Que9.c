#include<stdio.h>
void calcSq(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    calcSq(n);
    return 0;
}
void calcSq(int x)
{
    printf("Square of %d is %d",x,x*x);
}