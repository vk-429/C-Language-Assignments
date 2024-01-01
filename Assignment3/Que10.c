#include<stdio.h>

int main()
{
    float cp,sp,prcnt;
    printf("Enter cost price and selling price : ");
    scanf("%f%f",&cp,&sp);
    prcnt=(sp-cp)/cp*100;
    if(prcnt>=0)
        printf("You made %f percent profit",prcnt);
    else
    {   
        prcnt=-prcnt;
        printf("You lost %f percent",prcnt);
    }
    return 0;
}