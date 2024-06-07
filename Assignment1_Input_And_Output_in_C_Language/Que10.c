#include<stdio.h>

int main()
{
    int day,month,year;
    printf("Enter the date : ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day - %d , Month - %02d , Year - %d",day,month,year);
    return 0;
}