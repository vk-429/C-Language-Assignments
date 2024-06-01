#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter lengths of sides of the triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
        printf("Valid triangle");
    else 
        printf("Invalid triangle");
    return 0;
}