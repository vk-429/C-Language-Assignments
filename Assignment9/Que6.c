#include<stdio.h>

int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    switch(year%100==0)
    {
        case 0:
            switch(year%4==0)
            {
                case 0:
                    printf("Not a leap year");
                    break;
                case 1:
                    printf("Leap year");
            }
            break;
        case 1:
            switch(year%400==0) 
            {
                case 0:
                    printf("Not a leap year");
                    break;
                case 1:
                    printf("Leap year");
                    break;
            }
            break;
    }
    return 0;
}