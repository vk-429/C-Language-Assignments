#include<stdio.h>

int main()
{
    int arr[]={1,2,3};
    int b[]={4,5,6,7};
    int i,*ptr[2];
    ptr[0]=arr;
    ptr[1]=b;
    for(i=0;i<3;i++)
        printf("Value of arr[%d] = %d\n",i,ptr[0][i]);
    for(i=0;i<4;i++)
        printf("Value of b[%d] = %d\n",i,ptr[1][i]);
}