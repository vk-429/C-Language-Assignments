#include<stdio.h>
void doSort(int [],int);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    doSort(a,n);
    return 0;
}
void doSort(int b[],int m)
{
    int i,j;
    printf("Enter %d numbers : ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            if(b[i]>b[j])
            {
                b[i]=b[i]+b[j];
                b[j]=b[i]-b[j];
                b[i]=b[i]-b[j];
            }
        }
        printf("%d ",b[i]);
    }
}