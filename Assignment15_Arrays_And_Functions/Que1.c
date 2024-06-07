#include<stdio.h>
int findGreat(int [],int);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Greatest number is %d",findGreat(a,n));
    return 0;
}
int findGreat(int b[],int m)
{
    int i;
    printf("Enter %d numbers : ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        if(b[0]<b[i])
        {
            b[0]=b[0]+b[i];
            b[i]=b[0]-b[i];
            b[0]=b[0]-b[i];
        }
    }
    return b[0];
}