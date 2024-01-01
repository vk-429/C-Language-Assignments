#include<stdio.h>

int main()
{
    int n,i,count=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    do
    {
      n=n/10;
      count++;  
    } while (n!=0);
    printf("Number of digits in the given number is %d",count);
    return 0;
}