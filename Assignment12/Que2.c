#include<stdio.h>
void printRevN(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printRevN(n);
    return 0;
}
void printRevN(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        printRevN(n-1);
    }
}