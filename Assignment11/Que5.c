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
    int prime=1,count,i,j,k;    
    if(n>0)
    {    
        printf("1\n");
        for(i=1;i<n;i++)
        {
            for(j=prime;;j++)
            {
                count=0;
                for(k=1;k<=j;k++)
                {
                    if(j%k==0)
                        count++;
                }
                if(count==2)
                    break;
            }
            if(count==2)
            {
                printf("%d\n",j);
                prime=j+1;
            }
        }
    }
    else
        printf("Invalid input!");
}
