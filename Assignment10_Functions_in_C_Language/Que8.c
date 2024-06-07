#include<stdio.h>
int calcArngmnt(int);
int main()
{
    int n,r;
    printf("Enter values of n and r(n>r) : ");
    scanf("%d%d",&n,&r);
    printf("Number of possible arrangements is %d",calcArngmnt(n)/calcArngmnt(r));
    return 0;
}
int calcArngmnt(int p)
{
    int fact=1;
    for(int i=1;i<=p;i++)
    fact=fact*i;
    return fact;
}