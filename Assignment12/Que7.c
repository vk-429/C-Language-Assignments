#include<stdio.h>
void printODD(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printODD(n);
    return 0;
}
void printODD(int n)
{
    if(n>0)
    {
        printODD(n-1);
        printf("%d\n",n*n);
    }
} 