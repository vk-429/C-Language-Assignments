#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter no of values : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
       printf("%d ",a[i]);
    return 0;
}