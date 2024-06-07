#include<stdio.h>

int main()
{
    int n,i,j,SSN;
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
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
        SSN=a[1];
    }
    printf("Second smallest number is %d",SSN);


}