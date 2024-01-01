#include<stdio.h>

int main()
{
    int n,i,j,count;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        n++,count=0;
        for(j=1;j<=n;j++)
        {
        if(n%j==0)
        count++;
        }
        if(count==2)
        break;
    }
    if(count==2)
    printf("Next prime number to the given number is %d",n);
    return 0;
}