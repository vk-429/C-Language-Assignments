#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p;
    float avg,sum=0.0;
    printf("Enter the no. of data values, you would like to enter : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation is failed !");
        return 0;
    }
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        sum=sum+*(p+i);
    }
    avg=sum/n;
    printf("Average is %.2f",avg);
    free(p);
    return 0;
}