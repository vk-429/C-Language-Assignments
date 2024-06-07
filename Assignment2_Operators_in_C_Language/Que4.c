#include<stdio.h>

int main()
{
    int x,y;
    printf("Values of two integers x and y are respectively : ");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Result after swapping :-\nx=%d and y=%d",x,y);
    return 0;
}