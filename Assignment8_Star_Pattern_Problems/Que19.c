#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i<=3)
            {
                if((j>=4-i&&j<=i+6)||(j>=14-i&&j<=i+16))
                    printf("* ");
                else
                    printf("  ");
            }
            else if(i==4)
            {   
                 if(j==7)
                    printf("M ");
                else if(j==8)
                    printf("y ");
                else if(j==9)
                    printf("S ");
                else if(j==10)
                    printf("i ");
                else if(j==11)
                    printf("r ");
                else if(j==12)
                    printf("G ");
                else
                    printf("* ");
            }
            else
            {
                if(j>=i-3&&j<=23-i)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}