#include<stdio.h>
int fib(int n)
{
    if(n==0||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,i;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("Fib(%d) = %d\n",i,fib(i));
    return 0;
}