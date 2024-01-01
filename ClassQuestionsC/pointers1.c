#include<stdio.h>

int main()
{
    int x=5;
    printf("%d\n",&x);
     printf("%p",&x);
    printf("\n%d",*&x);
    return 0;
}