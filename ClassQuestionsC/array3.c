#include<stdio.h>

int main()
{
    int a[10],i,Se=0,So=0;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            Se+=a[i];
        else
            So+=a[i];
    }
    printf("Sum of all even nos is %d and sum of all odd noe is %d",Se,So);

}