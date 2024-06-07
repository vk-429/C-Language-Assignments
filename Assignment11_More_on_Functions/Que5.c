#include<stdio.h>
void printPrime(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printPrime(n);
    return 0;
}
void printPrime(int n)
{
    int prime=2,count=1,i,j,k;    
    if(n>0)
    {  
        for(i=1;i<=n;i++)
        {
            count=1;
            for(j=prime;count;j++)
            {
                count=0;
                for(k=2;k*k<=j;k++)
                {
                    if(j%k==0)
                    {
                        count++;
                        break;
                    }
                }
            }
            printf("%d\n",j-1);
            prime=j;
        }
    }
    else
        printf("Invalid input!");
}
