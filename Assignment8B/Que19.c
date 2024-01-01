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
                printf("*");
            else
                printf(" ");
            }
            else if(i==4&&j==7)
                printf("MySirG");
            else if(i==4&&j>=7&&j<=12)
                continue;
            else
            {
                if(j>=i-3&&j<=23-i)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}