#include<stdio.h>
void binary(int n)
{
    if(n==0)
        return;
    binary(n>>1);
    printf("%d ",n&1);
}
int main()
{
    int x;
    printf("Enter a number : ");
    scanf ("%d",&x);
    binary(x);
    return 0;
}