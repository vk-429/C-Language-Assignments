#include<stdio.h>

int main()
{
    int a[10],GN;
    printf("Enter ten numbers : ");
    for(int i=0;i<10;i++)
    {
    
        scanf("%d",&a[i]);
        if(a[0]<a[i])
            a[0]=a[i];
        GN=a[0];
    }
    printf("Greatest number is %d",GN);
    return 0;
}