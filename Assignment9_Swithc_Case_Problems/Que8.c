#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    switch(num>0)
    {
        case 0:
            switch(num==0)
            {
                case 0:
                    num=-num;
                    printf("Number after reversing sign : %d",num);
                    break;
                case 1:
                    printf("zero");
            }
            break;
        case 1:
            num=-num;
            printf("Number after reversing sign : %d",num);
    }
    return 0;
}