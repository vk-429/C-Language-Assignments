#include<stdio.h>

int main()
{
    int unit;
    float bill,charge,total;
    printf("Enter units : ");
    scanf("%d",&unit);
    switch(unit)
    {
        case 1 ... 50:
            bill=unit*0.50;
            charge=(bill*20)/100;
            total=bill+charge;
            printf("Your total electricity bill is Rs. %.2f",total);
            break;
        case 51 ... 150:
            bill=50*0.50+(unit-50)*0.75;
            charge=(bill*20)/100;
            total=bill+charge;
            printf("Your total electricity bill is Rs. %.2f",total);
            break;
        case 151 ... 250:
            bill=50*0.50+100*0.75+(unit-150)*1.20;
            charge=(bill*20)/100;
            total=bill+charge;
            printf("Your total electricity bill is Rs. %.2f",total);
            break;
        default:
            bill=50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
            charge=(bill*20)/100;
            total=bill+charge;
            printf("Your total electricity bill is Rs. %.2f",total);
    }
    return 0;
}