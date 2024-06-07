#include<stdio.h>
int countDupli(int[],int);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Total no of duplicate elements in array is %d",countDupli(a,n));
}
int countDupli(int b[],int n)
{
    int i,j,count,flag;
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            count++;
    }
    return count;
}