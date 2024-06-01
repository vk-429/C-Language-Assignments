#include<stdio.h>

int main()
{
    int n,i,fibNm2=-1,fibNm1=1,fibN;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        fibN=fibNm1+fibNm2;
        fibNm2=fibNm1;
        fibNm1=fibN;
    }
    printf("Fib(%d) is %d\n",n,fibN);
    return 0;
}