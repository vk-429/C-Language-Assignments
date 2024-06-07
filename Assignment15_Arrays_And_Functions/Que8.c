#include<stdio.h>
void printUnique(int[],int);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printUnique(a,n);
    return 0;
}
void printUnique(int b[],int n)
{
    int i,j,flag,count;
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Unique elements of array are given as :-\n");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(b[j]==b[i])
                count++;
        }
        if(count==1)
            printf("%d ",b[i]);
    }
}