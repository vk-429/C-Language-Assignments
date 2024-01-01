#include<stdio.h>

int main()
{
    int i,num[10],Se=0,So=0;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(num[i]%2==0)
            Se=Se+num[i];
        else
            So=So+num[i];
    }
    printf("Sum of all even numbers is %d\n",Se);
    printf("Sum of all odd numbers is %d",So);
    return 0;
}