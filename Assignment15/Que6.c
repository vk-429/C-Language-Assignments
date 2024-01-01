#include<stdio.h>
void printReverse(int[],int);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printReverse(a,n);
    return 0;
}
void printReverse(int b[],int n)
{
    int i;
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=n-1;i>=0;i--)
        printf("%d ",b[i]);
}