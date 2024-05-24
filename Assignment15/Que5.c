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
    int i,flag=0;
    printf("Enter array values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(b[i]==b[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return b[i];
    else
        return 0;
}