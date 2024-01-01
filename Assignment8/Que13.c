#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {   
            if(i==1)
            {
                if(j<=7)
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
            {
                if(j<=8-i)
                {
                    printf("%c ",k);
                    k++;
                }
                else if(j>=i+6)
                {
                    k--;
                    printf("%c ",k);
                }
                else
                    printf("  ");
            }
        }
        printf("\n");    
    }
    return 0;
}