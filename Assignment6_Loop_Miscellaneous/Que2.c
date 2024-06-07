#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        sum=sum+2*i;
    }
    printf("Sum is %d",sum);
    return 0;
}