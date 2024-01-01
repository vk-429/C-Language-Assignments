#include<stdio.h>
void printFib(int);
int main()
{
    int n;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    printFib(n);
    return 0;
}
void printFib(int n)
{
    int fibN,fibNm1=1,fibNm2=-1;
    for(int i=1;i<=n;i++)
    {
        fibN=fibNm1+fibNm2;
        fibNm2=fibNm1;
        fibNm1=fibN;
        printf("Fib(%d) = %d\n",i,fibN);
    }
}