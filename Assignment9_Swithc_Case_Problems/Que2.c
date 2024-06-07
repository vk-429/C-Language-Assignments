#include<stdio.h>
#include<stdlib.h>

int main()
{
    for(;;) 
    {  
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n\n");
        int n,a,b;
        printf("Enter your choice : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                printf("Sum is %d\n\n",a+b);
                break;
            case 2:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                printf("Difference is %d\n\n",a-b);
                break;
            case 3:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                printf("Multiplication is %d\n\n",a*b);
                break;
            case 4:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                printf("Division is %d\n\n",a/b);
                break;
            case 5:
                exit(0);
            default:
                printf("invalid choice!\n\n");
        }
    }
    return 0;
}