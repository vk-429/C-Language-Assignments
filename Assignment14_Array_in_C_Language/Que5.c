#include<stdio.h>

int main()
{
    int a[10],LN;
    printf("Enter ten numbers : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
            if(a[0]>a[i])
                a[0]=a[i];
            LN=a[0]; 
    }
    printf("Smallest number is %d",LN);
    return 0; 
}