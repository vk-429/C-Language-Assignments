#include<stdio.h>
void dorotate(int*,int,int,int);
int main()
{
    int m,n,d;
    printf("Enter size of the array : ");
    scanf("%d",&m);
    printf("Enter values of n and d(1 for left and 0 for right) : ");
    scanf("%d%d",&n,&d);
    int a[m];
    dorotate(a,m,n,d);
    return 0;
}
void dorotate(int b[],int n1,int n,int d)
{
    int i,j,temp,c[n1];
    printf("Enter array values : ");
    for(i=0;i<n1;i++)
        scanf("%d",&b[i]);
    if(d==1)
    {
        for(i=0;i<n1-n;i++)
            c[i]=b[n+i];
        for(i=n1-n;i<n1;i++)
            c[i]=b[n+i-n1];
    }
    if(d==0)
    {
        for(i=n;i<n1;i++)
            c[i]=b[i-n];
        for(i=0;i<n;i++)
            c[i]=b[n1+i-n];
    }
    for(i=0;i<n1;i++)
    {
        b[i]=c[i];
        printf("%d ",b[i]);
    }
}