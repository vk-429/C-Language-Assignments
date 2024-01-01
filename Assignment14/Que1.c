#include<stdio.h>

int main()
{
    int n[10],sum=0;
    printf("Enter ten numbers : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    printf("Sum is %d",sum);
    return 0;
}