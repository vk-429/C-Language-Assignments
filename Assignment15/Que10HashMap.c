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
    printf("Enter array elements(0 to 100) : ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    int freq[101]={0};
    for(i=0;i<n;i++)
        freq[b[i]]++;
    for(i=0;i<101;i++)
        if(freq[i]!=0)
            printf("Frequency of %d is %d\n",i,freq[i]);
}