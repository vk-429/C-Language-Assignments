#include<stdio.h>

int main()
{
    int n,result;
    printf("Enter any number : ");
    scanf("%d",&n);
    result=n&1;
    if(result==0)
        printf("%d is an even number",n);
    else
        printf("%d is an odd number",n);
    return 0;
}