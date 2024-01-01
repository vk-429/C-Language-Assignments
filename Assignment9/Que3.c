#include<stdio.h>

int main()
{
    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thirsday\n");
    printf("6. Friday\n");
    printf("7. Saterday\n");
    int n;
    printf("Enter day number : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Hello, Good Morning, it is Sunday today");
            break;
        case 2:
            printf("Hello, Good Morning, it is Monday today");
            break;
        case 3:
            printf("Hello, Good Morning, it is Tuesday today");
            break;
        case 4:
            printf("Hello, Good Morning, it is Wednesday today");
            break;
        case 5:
            printf("Hello, Good Morning, it is Thirsday today");
            break;
        case 6:
            printf("Hello, Good Morning, it is Friday today");
            break;
        case 7:
            printf("Hello, Good Morning, it is Saterday today");
            break;
        default:
            printf("Invalid input!");
    }
    return 0;
}