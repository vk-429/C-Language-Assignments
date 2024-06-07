#include<stdio.h>

int main()
{
    int n,n1,i,j,count,r,power,sum;
    for(i=1;i<=1000;i++)
    {
        count=0;
        sum=0;
        n=i;
        n1=i;
        while(n!=0)
        {
            n/=10;
            count++;
        }
        sum=0;
        while(n1!=0)
        {
            r=n1%10;
            n1/=10;
            power=1;
            for(int j=1;j<=count;j++)
            {
                power=power*r;
            }
            sum=sum+power;
        }
        if(sum==i)
            printf("%d\n",i);
    }
    return 0;
}