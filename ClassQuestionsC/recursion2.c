#include<stdio.h>
int calcfact(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial is %d",calcfact(n));
    return 0;
}
int calcfact(int x)
{
    int fact;
    if(x==0)
        return 1;
    return x*calcfact(x-1);
}