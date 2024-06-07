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
    for(int i=1;i<=n;i++)
    printf("%d\n",2*i-1);
} 