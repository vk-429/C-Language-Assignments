#include<stdio.h>
void printPF(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printPF(n);
}
void printPF(int n)
{
    int i=2;
    while(n!=1)
    {
        if(n%i==0)
        {
            n/=i;
            printf("%d ",i);
        }
        else
            i++;
    }
}