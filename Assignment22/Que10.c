#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    int max,min;
    printf("Enter the no. of values you want to enter : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter the values : ");
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    max=*p;
    min=*p;
    for(i=1;i<n;i++)
    {
        if(*(p+i)>max)
            max=*(p+i);
        if(*(p+i)<min)
            min=*(p+i);
    }
    printf("Maximum = %d\nMinimum = %d",max,min);
    return 0;
}