#include<stdio.h>

int main()
{
    int n,i,j,SLN;
    printf("Enter no of values : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<2;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
        SLN=a[1];
    }
    printf("Second largest number is %d",SLN);


}