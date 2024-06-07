#include<stdio.h>

int main()
{
    int n,n1,n2,i,j,count=0,r,power,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n!=0)
    {
        n/=10;
        count++;
    }
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
    if(sum==n2)
        printf("%d is an armstrong number",n2);   
    else
        printf("%d is not an armstrong number",n2);      
    return 0;
}