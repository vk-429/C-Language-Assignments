#include<stdio.h>
void doSwap(int*,int*);
int main()
{
    int a,b;
    printf("Entr two numbers : ");
    scanf("%d%d",&a,&b);
    doSwap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
void doSwap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}