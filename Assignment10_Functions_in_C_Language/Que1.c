#include<stdio.h>
float calcArea(float);
int main()
{   
    float rad;
    printf("Enter radius : ");
    scanf("%f",&rad);
    printf("Area of the circle is %.2f",calcArea(rad));
    return 0;
}
float calcArea(float rad)
{
    return (3.14*rad*rad);
}