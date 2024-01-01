#include<stdio.h>

int main()
{
    int i,a[10],max=-999999999;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("Maximum value is %d",max);
    return 0;
}