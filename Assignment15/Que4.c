#include<stdio.h>
void rotateND(int [],int,int,int);
int main()
{
    int m;
    printf("Enter size of array : ");
    scanf("%d",&m);
    int n,d,a[m];
    printf("Enter values of n and d(1 for left 0 for right) : ");
    scanf("%d%d",&n,&d);
    rotateND(a,m,n,d);
    return 0;
}
void rotateND(int b[],int n1,int n,int d)
{
    int i;
    printf("Enter array values : ");
    for(i=0;i<n1;i++)
        scanf("%d",&b[i]);
    int c[n1];
    n%=n1;
    for(i=0;i<n1;i++)
    {
        c[i]=b[i];
    }
    if(d==1)
    {
        i=0;
        while(i<(n1-n))
        {
            b[i]=c[n+i];
            printf("%d ",b[i]);
            i++;
        }
        int j=0;
        while(j<n)
        {
            b[i]=c[j];
            printf("%d ",b[i]);
            i++;j++;
        }
    }
    if(d==0)
    {
        for(i=0;i<n1;i++)
        {
            if(i>=n)
                b[i]=c[i-n];
            else
                b[i]=c[(n1+i)-n];
            printf("%d ",b[i]);
        }
    }
}

