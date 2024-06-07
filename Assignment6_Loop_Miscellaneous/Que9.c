#include<stdio.h>

int main()
{
    int a,b,i,j,LCM=1;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    for(i=2;(a!=1||b!=1);i++)
    {
        for(j=1;(a%i==0||b%i==0);j++)
        {
            if(a%i==0)
            {
                if(b%i==0)
                {
                    a=a/i;
                    b=b/i;
                }
                else
                    a=a/i;
            }
            else
                b=b/i;
            LCM=LCM*i;
        } 
    }
    printf("LCM of given numbers is %d",LCM);
    return 0;
}