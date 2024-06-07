#include<stdio.h>
int calcLCM(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    printf("LCM of %d and %d is %d",x,y,calcLCM(x,y));
    return 0;
}
int calcLCM(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        break;
    }
    return i;
}