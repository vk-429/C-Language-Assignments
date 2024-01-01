#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp=n;
    int fd,ld=n%10;
    int num=10;
    while(temp/=10)
    {
        if(temp<10)fd=temp;
        if(temp>=100)num*=10;
        ld*=10;
    }
    int num1=(n/10)%num;
    num1=(num1*10)+ld+fd;
    printf("Original numer = %d\n",n);
    printf("After swapping 1st and last digits number = %d",num1);
    return 0;
}