#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,D;
    float x,x1,x2,real,img;
    printf("Enter coefficients of the quadratic equation : ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D==0)
    {
        case 0:
            switch(D>0)
            {
                case 0:
                    real=(-b/(2*a));
                    img=(sqrt(-D)/(2*a));
                    printf("Roots are imaginary and having values %.2f+%.2fi and %.2f-%.2fi",real,img,real,img);
                    break;
                case 1:
                    x1=(-b/(2*a))+(sqrt(D)/(2*a));
                    x2=(-b/(2*a))-(sqrt(D)/(2*a));
                    printf("Roots are real and distinct and having values %.2f and %.2f",x1,x2);
            }
            break;
        case 1:
            x=(-b/(2*a));
            printf("Roots are real and equal and having value %.2f",x);
    }
    return 0;
}