#include<stdio.h>
void printN(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printN(n);
    return 0;
}
void printN(int n)
{
    for(int i=1;i<=n;i++)
    printf("%d\n",i);
}