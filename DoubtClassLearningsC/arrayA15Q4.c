#include<stdio.h>
int dorotate(int*,int,int,int);
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
int dorotate(int b[],int n1,int n,int d)
{
    int i,j,temp;
    printf("Enter array values : ");
    for(i=0;i<n1;i++)
        scanf("%d",&b[i]);
    if(d==1)
    {
        for(i=0;i<n;i++)
        {
            temp=b[0];
            for(j=0;j<n1-1;j++)
                    b[j]=b[j+1];
            b[n1-1]=temp;
        }
    }
    if(d==0)
    {
        for(i=0;i<n;i++)
        {
            temp=b[n1-1];
            for(j=n1-1;j>0;j--)
                    b[j]=b[j-1];
            b[0]=temp;
        }
    }
    for(i=0;i<n1;i++)
        printf("%d ",b[i]);
}