#include<stdio.h>

int main()
{
    int n;
    printf("Enter an even number : ");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
            n=n+1;
            printf("Upper nearest odd number is %d",n);
            break;
        case 1:
            printf("Not an even number");
            break;
        case -1:
            printf("Not an even number");
    }
    return 0;
}