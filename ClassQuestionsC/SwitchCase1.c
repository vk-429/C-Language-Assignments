#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    switch(x)
    {
        case 25:
            printf("Atul ");
            break;
        case -45:
            printf("Suraj ");
            break;
        case 0:
            printf("Bikash ");
            break;
        case 5:
            printf("Hardic ");
        default:
            printf("Anonymous");
    }
    return 0;
}