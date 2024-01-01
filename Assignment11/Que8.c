#include<stdio.h>
void printPT(int);
int calcFact(int);
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printPT(n);
    return 0;
}
void printPT(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n-i||j>=n+i)
                printf("   ");
            if((j>=n+1-i)&&(j<=n-1+i))
            {    
                if(n%2==1)
                {
                    if((i%2==0&&j%2==1)||(i%2==1&&j%2==0))
                        printf("   ");
                    else
                    {
                        printf(" %d ",calcFact(i-1)/(calcFact(k)*calcFact(i-1-k)));
                        k++;
                    }
                }
                if(n%2==0)
                {
                    if((i%2==0&&j%2==0)||(i%2==1&&j%2==1))
                        printf("   ");
                    else
                    {
                        printf(" %d ",calcFact(i-1)/(calcFact(k)*calcFact(i-1-k)));
                        k++;
                    }
                }    
            }
        }
        printf("\n");
    }
}
int calcFact(int n)
{
    int fact=1;
    if(n==0)
        return 1;
    for(int i=1;i<=n;i++)
      fact=fact*i;
    return fact;
}
