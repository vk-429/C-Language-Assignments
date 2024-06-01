#include<stdio.h>
void printPrime(int,int);
int main()
{
    int a,b;
    printf("Enter the range : ");
    scanf("%d%d",&a,&b);
    printPrime(a,b);
    return 0;
}
void printPrime(int x,int y)
{
    int count;
    for(int i=x;i<=y;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
            printf("%d\n",i);
    }
}