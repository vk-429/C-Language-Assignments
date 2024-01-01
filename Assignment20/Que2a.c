#include<stdio.h>
#include<string.h>
void swap(char** x,char** y)
{
    char *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    char *a[20],*b[20];
    printf("Enter 1st string : ");
    fgets(a,20,stdin);
    printf("Enter 2nd string : ");
    fgets(b,20,stdin);
    swap(&a,&b);
    printf("After swapping :-\n1st string : %s\n2nd string : %s",a,b);
    return 0;
}