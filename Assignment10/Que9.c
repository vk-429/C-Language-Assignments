#include<stdio.h>
int checkDigit(int,int);
int main()
{
    int n,d,x;
    printf("Enter number and digit : ");
    scanf("%d%d",&n,&d);
    x=checkDigit(n,d);
    if(x==1)
        printf("Given number contains given digit");
    else
        printf("Given number does'nt contain given digit");
    return 0;
}
int checkDigit(int n,int d)
{
    int r;
    while(n!=0)
    {
        r=n%10;
        if(r==d)
            return 1;
        n=n/10;
    }
}