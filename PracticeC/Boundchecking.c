#include<stdio.h>

int main()
{
    //int arr[5]={1,2,3,4,5,6,7,8,9,10};//Invalid
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<10;i++)printf("%d ",arr[i]);//No Bound Cheking
    return 0;
}