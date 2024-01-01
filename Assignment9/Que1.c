#include<stdio.h>

int main()
{
    printf("1. January\n");
    printf("2. Fabruary\n");
    printf("3. March\n");
    printf("4. April\n");
    printf("5. May\n");
    printf("6. June\n");
    printf("7. July\n");
    printf("8. August\n");
    printf("9. September\n");
    printf("10. October\n");
    printf("11. November\n");
    printf("12. December\n");
    int n;
    printf("Enter month number : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("31 Days");
            break;
        case 2:
            printf("28 or 29 Days");
            break;
        case 3:
            printf("31 Days");
            break;
        case 4:
            printf("30 Days");
            break;
        case 5:
            printf("31 Days");
            break;
        case 6:
            printf("30 Days");
            break;
        case 7:
            printf("31 Days");
            break;
        case 8:
            printf("31 Days");
            break;
        case 9:
            printf("30 Days");
            break;
        case 10:
            printf("31 Days");
            break;
        case 11:
            printf("30 Days");
            break;
        case 12:
            printf("31 Days");
            break;
        default:
            printf("Invalid input!");
    }
    return 0;
}