#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\n\nEnter your choice : ");
    scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                printf("Sum is %d",a+b);
                break;
            case 2:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                printf("Difference is %d",a-b);
                break;
            case 3:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                printf("Multiplication is %d",a*b);
                break;
            case 4:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                printf("Quotient is %d",a/b);
                break;
            case 5:
                exit(0);
            default:
                printf("invalid choice");
        }
    }//end of while
    return 0;
}