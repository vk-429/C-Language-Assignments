#include<stdio.h>
#include<stdlib.h>

int main()
{
    while(1)
    {
        printf("1. Check for Isosceles Triangle\n");
        printf("2. Check for Right Angled Triangle\n");
        printf("3. Check for Equilateral Triangle\n");
        printf("4. Exit\n\n");
        int n,a,b,c;
        printf("Enter your choice : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter sides of the tringle : ");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b||b==c||c==a)
                    printf("Isosceles Triangle\n\n");
                else
                    printf("Not an Isosceles Triangle\n\n");
                break;
            case 2:
                printf("Enter sides of the tringle : ");
                scanf("%d%d%d",&a,&b,&c);
                if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
                    printf("Right Angled Triangle\n\n");
                else
                    printf("Not a Right Angled Triangle\n\n");
                break;
            case 3:
                printf("Enter sides of the tringle : ");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b&&b==c)
                    printf("Equilateral Triangle\n\n");
                else
                    printf("Not an Equilateral Triangle\n\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid input!\n\n");
        }
    }
    return 0;
}


