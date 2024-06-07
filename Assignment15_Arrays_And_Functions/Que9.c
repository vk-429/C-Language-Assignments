#include<stdio.h>
void doMerge(int[],int[],int);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n],b[n];
    doMerge(a,b,n);
    return 0;
}
void doMerge(int c[],int d[],int n)
{
    int i,j,count=0,count1=0,temp,M[2*n];
    printf("Enter values of 1st array : ");
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    printf("Enter values of 2nd array : ");
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(c[i]<c[j])
            {
                c[i]=c[i]+c[j];
                c[j]=c[i]-c[j];
                c[i]=c[i]-c[j];
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(d[i]<d[j])
            {
                d[i]=d[i]+d[j];
                d[j]=d[i]-d[j];
                d[i]=d[i]-d[j];
            }
        }
    }
    int p1=0,p2=0;
    for(i=0;i<2*n;i++)
    {
        if(c[p1]>d[p2])
        {
            M[i]=c[p1];
            p1++;
        }
        else
        {
            M[i]=d[p2];
            p2++;
        }
    }
    for(i=0;i<2*n;i++)
        printf("%d ",M[i]);
}
