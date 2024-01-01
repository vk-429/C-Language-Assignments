#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int perm(int n,int r)
{
    return fact(n)/fact(n-r);
}
void Pascle(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
            printf("  ");
        for(j=0;j<=i;j++)
            printf("%d ",comb(i,j));
    printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    Pascle(n);
    return 0;
}