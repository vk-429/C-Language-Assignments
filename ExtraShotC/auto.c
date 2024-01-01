#include<stdio.h>
int main()
{
    //auto
    auto int a=11;
    int b;
    int c;
    printf("%d %d %f\n",a,b,c);//a=11
    //Local Body
    {
        int a=20,i;
        for (i=0;i<3;i++)
        {
            printf("%d ",a);//a=20
        }
        printf("\n");
    }
    printf("%d ",a);
    return 0;
}