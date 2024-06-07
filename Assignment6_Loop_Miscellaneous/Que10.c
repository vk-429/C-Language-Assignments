#include<stdio.h>

int main()
{
    int n,r,n1=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n1=n1*10+r;
        n=n/10;
    }
    printf("Number after reversing is %d\n",n1);
    return 0;
}