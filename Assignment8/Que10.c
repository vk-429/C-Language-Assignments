#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=0;
        for(j=1;j<=7;j++)
        {   
            if(i==1)
            {
                if(j<=4)
                {
                    k++;
                    printf("%d",k);
                }
                else
                {
                    k--;
                    printf("%d",k);
                }
            }
            else 
            {
                if(j<=5-i)
                {
                    k++;
                    printf("%d",k);
                }
                else if(j>=i+3)
                {
                    printf("%d",k);
                    k--;
                }
                else
                    printf(" ");
            }
        }
        printf("\n");    
    }
    return 0;
}