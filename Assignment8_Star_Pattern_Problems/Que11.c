#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        {   
            if(j>=6-i&&j<=i+4)
            {
                if(j<=5)
                {
                    printf("%c ",k);
                    k++;
                }
                else
                {
                    k--;
                    printf("%c ",k-1);
                }
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}