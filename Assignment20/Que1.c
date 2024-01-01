#include<stdio.h>
void swap(int *p,int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
int main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swapping :-\na=%d\nb=%d",a,b);
    return 0;
}