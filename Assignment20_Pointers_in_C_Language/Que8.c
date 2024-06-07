#include<stdio.h>

int main()
{
    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);
    int i,a[size],*p,sum=0;
    p=a;
    printf("Enter array values : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",(p+i));
        sum+=*(p+i);
    }
    printf("Sum is %d",sum);
    return 0;
}