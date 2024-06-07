#include<stdio.h>

int main()
{
    int a[10],So=0,Se=0;
    printf("Enter ten numbers : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            Se=Se+a[i];
        else
            So=So+a[i];
    }
    printf("Sum of odd numbers is %d\n",So);
    printf("Sum of even numbers is %d",Se);
    return 0;
}