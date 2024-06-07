#include<stdio.h>
void printRevODD(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printRevODD(n);
    return 0;
}
void printRevODD(int n)
{
    if(n>0)
    {
        printf("%d\n",2*n-1);
        printRevODD(n-1);
    }
} 