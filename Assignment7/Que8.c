#include<stdio.h>

int main()
{
    int n,i,j,count=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=n+1;count;i++)
    {
        count=0;
        for(j=2;j*j<=i;j++)
        {
            if (i%j==0)
            {
                count++;
                break;
            } 
        }
    }
    printf("Next prime number to the given number is %d",i-1);
    return 0;
}