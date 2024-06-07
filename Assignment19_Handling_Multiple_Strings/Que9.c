#include<stdio.h>
#include<string.h>
int fact(int n)
{
    int i,fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int main()
{
    char UNL[5][20]={"vk_123","suraj_67","modi_4545","virat.kohli","sky.123"};
    char S1[20];
    printf("Enter a username : ");
    scanf("%s",S1);
    int i,count=0,r,n;
    for(i=0;i<5;i++)
    {
        r=strcmp(S1,UNL[i]);
        if(r==0)
            break;
    }
    if(r==0)
    {
        printf("You are elegible to calculate factorial\nEnter the number : ");
        scanf("%d",&n);
        printf("Factorial is %d",fact(n));
    }
    else
        printf("Invalid input!");
    return 0;
}