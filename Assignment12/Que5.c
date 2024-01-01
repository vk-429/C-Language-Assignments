#include<stdio.h>
void printEVEN(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printEVEN(n);
    return 0;
}
void printEVEN(int n)
{
    if(n>0)
    {
        printEVEN(n-1);
        printf("%d\n",2*n);
    }
} 