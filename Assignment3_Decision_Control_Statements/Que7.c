#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter coefficients of the quadratic equation : ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("Roots are real and distinct");
    else if(d==0)
        printf("Roots are real and equal");
    else
        printf("Roos are imaginary");
    return 0;
}