#include<stdio.h>

int main()
{
    double INR,USD;
    printf("Enter price in INR : ");
    scanf("%lf",&INR);
    USD=INR/76.23;
    printf("Price in USD is %.2lf",USD);
    return 0;
}