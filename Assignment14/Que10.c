#include<stdio.h>

int main()
{
    int n;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    int a[n],b[n],i;
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
        printf("%d ",b[i]);
    }
}