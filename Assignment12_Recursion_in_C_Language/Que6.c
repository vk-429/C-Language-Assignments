#include<stdio.h>
void printRevEVEN(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printRevEVEN(n);
    return 0;
}
void printRevEVEN(int n)
{
    if(n>0)
    {
        printf("%d\n",2*n);
        printRevEVEN(n-1);
    }
} 