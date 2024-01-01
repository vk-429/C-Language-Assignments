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
    int i,j,count=0,count1=0,temp;
    printf("Enter values of 1st array : ");
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    printf("Enter values of 2nd array : ");
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(c[i]<c[j]||c[i]<d[j])
            {
                if(c[i]<c[j])
                {
                    c[i]=c[i]+c[j];
                    c[j]=c[i]-c[j];
                    c[i]=c[i]-c[j];
                }
                else
                {
                    c[i]=c[i]+d[j];
                    d[j]=c[i]-d[j];
                    c[i]=c[i]-d[j];
                }
            }
        }
        printf("%d ",c[i]);
    }
     for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(d[i]<d[j])
            {

                d[i]=d[i]+d[j];
                d[j]=d[i]-d[j];
                d[i]=d[i]-d[j];
            }
        }
        printf("%d ",d[i]);
    }
} 