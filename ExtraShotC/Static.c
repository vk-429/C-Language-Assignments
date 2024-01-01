#include<stdio.h>
static char c;
static int i;
static float f;
static char s[100];

void sum()
{
    static int a=10;//ram me static area me memory mil jayegi
    int b=24;//auto by default
    printf("%d %d \n",a,b);
    a++;
    b++;
}
int main()
{
    int i;
    printf("%d %d %f %s\n",c,i,f,s);//no garbage in static variable, zero by default
    for(i=0;i<3;i++)
    {
        sum();
    }
    return 0;
}