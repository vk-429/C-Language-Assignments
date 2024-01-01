#include<stdio.h>

int main()
{
    int unit;
    float bill,charge,TB;
    printf("Enter units : ");
    scanf("%d",&unit);
    switch(unit<=50)
    {
        case 1: bill=unit*0.5;
                break;
        case 0: switch(unit<=150)
                {
                    case 1: bill=25+(unit-50)*0.75;
                            break;
                    case 0: switch(unit<=250)
                            {
                                case 1: bill=100+(unit-150)*1.20;
                                        break;
                                case 0: bill=220+(unit-250)*1.50;
                                        break;
                            }
                            break;
                }
                break;
    }
    charge=(bill*20)/100;
    TB=bill+charge;
    printf("Your total bill is %.2f",TB);
    return 0;
}