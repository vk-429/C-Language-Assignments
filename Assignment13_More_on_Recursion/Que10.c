#include<stdio.h>
int calcPower(int,int);
int main()
{
    int n,p;
    printf("Enter number and power : ");
    scanf("%d%d",&n,&p);
    printf("Power is %d",calcPower(n,p));
    return 0;
}
int calcPower(int n,int p)
{
    if(p>0)
    {
        return calcPower(n,p-1)*n;
    }
    if(p==0)
        return 1;
}