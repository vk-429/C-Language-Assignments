#include<stdio.h>

int main()
{
    int a[]={1,5,3,8,5,0,8,9,10,4,17,8,24,67,56};
    int b[100]={0},i,j;
    for(i=0;i<15;i++)
    {
        b[a[i]]++;
    }
    for (i = 0; i < 100; i++)
    {
        if(b[i]!=0)
            printf("Frequency of %d is %d\n",i,b[i]);
    }
    return 0;
}