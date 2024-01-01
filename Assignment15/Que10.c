#include<stdio.h>
void countFreq(int[],int);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    countFreq(a,n);
    return 0;
}
void countFreq(int b[],int n)
{
    int i,j,count,count1;
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        count1=0;
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
                count++;
        }
        for(j=i;j>=0;j--)
        {
            if(b[j]==b[i])
                count1++;
        }
        if(count1==1)
            printf("Frequency of %d is %d\n",b[i],count+1);
    }
}