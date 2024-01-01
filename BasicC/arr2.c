#include<stdio.h>

int main()
{
    int a[10]={3,5,8,1,0,12,7,9,11,2};
    int large=-999999999;
    for(int i=0;i<10;i++)
        if(large<a[i])
            large=a[i];
    printf("Largest number is %d",large);
    return 0;
}