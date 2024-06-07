#include<stdio.h>
int findnPN(int);
int main()
{
    int n,nPN;
    printf("Enter any number : ");
    scanf("%d",&n);
    nPN=findnPN(n);
    printf("%d is the next prime number of %d",nPN,n);
    return 0;
}
int findnPN(int n)
{
    int count;
    do
    {
        n++;
        count=0;
        for(int j=1;j<=n;j++)
        {
            if(n%j==0)
                count++;
        }
        if(count==2)
        return n;
    }while(1);
}
