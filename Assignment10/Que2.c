#include<stdio.h>
float calcSI(int,int,int);
int main()
{
    int P,R,T;
    printf("Enter principal, rate and time(in years) : ");
    scanf("%d%d%d",&P,&R,&T);
    printf("Simple interest is Rs. %f",calcSI(P,R,T));
    return 0;
}
float calcSI(int P,int R,int T)
{
    return((P*R*T)/100);
}