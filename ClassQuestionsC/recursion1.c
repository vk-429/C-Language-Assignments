#include<stdio.h>
void printNum(int);

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printNum(n);
    return 0;
}
void printNum(int n)
{
    if(n>0)
    {
        printNum(n-1);
        printf("%d\n",n);
    }
}