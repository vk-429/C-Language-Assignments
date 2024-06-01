#include<stdio.h>

int main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        k=0;
        for(j=1;j<=7;j++)
        {   
            if(j>=5-i&&j<=i+3)
            {
                if(j<=4)
                {
                    k++;
                    printf(" %d",k);
                }
                else
                {
                    k--;
                    printf(" %d",k);
                }
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}