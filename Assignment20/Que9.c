#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int a[size],*p,i;
    p=a;
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++)
        scanf("%d",(p+i));
    for(i=(size-1);i>=0;i--)
        printf("%d ",*(p+i));
    return 0;
}