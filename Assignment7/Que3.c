#include<stdio.h>

int main()
{
    int n,i,fibNm2=-1,fibNm1=1,fibN;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n>=0)
    {
        for(i=0;;i++)
        {
            fibN=fibNm1+fibNm2;
            fibNm2=fibNm1;
            fibNm1=fibN;
            if(fibN==n)
            {
                printf("Given number exists in the fibonacci series");
                break;
            }
            else if(fibN>n)
            {
                printf("Given number does'nt exist in the fibonacci series");
                break;
            }  
        }
    }
    else
        printf("Invalid input!");
    return 0;
}