#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    switch(x)
    {
        case 1 ... 10:
            printf("Atul ");
            break;
        case 11 ... 20:
            printf("Suraj ");
            break;
        case 21 ... 30:
            printf("Bikash ");
            break;
        case 31 ... 40:
            printf("Hardic ");
        default:
            printf("Anonymous");
    }
    return 0;
}