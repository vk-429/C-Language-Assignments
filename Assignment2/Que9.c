#include<stdio.h>

int main()
{
    int i,f,ch,d;
    i=sizeof(int);
    f=sizeof(float);
    ch=sizeof(char);
    d=sizeof(double);
    printf("size of i, f, ch and d are %d, %d ,%d and %d respectively.",i,f,ch,d);
    return 0;
}