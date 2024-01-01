#include<stdio.h>

int main()
{
    int num,digt;
    printf("Enter a number and  a digit : ");
    scanf("%d%d",&num,&digt);
    num*=10;
    num+=digt;
    printf("Required answer is %d",num);
    return 0;
}