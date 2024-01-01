#include<stdio.h>
int findDupli(int[],int);
int main()
{
    int n,Result;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    Result=findDupli(a,n);
    if(Result==0)
        printf("No adjacent duplicate values are found");
    else
        printf("First adjacent duplicate value is found as %d",Result);
    return 0;
}
int findDupli(int b[],int n)
{
    int i;
    printf("Enter array values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==b[i+1])
            break;
    }
    if(i==n)
        return 0;
    else
        return b[i];
}