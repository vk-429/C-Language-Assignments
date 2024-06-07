#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Values of integers x and y are respectively : ");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("Result after swapping :-\nx=%d and y=%d",x,y);
    return 0;
}