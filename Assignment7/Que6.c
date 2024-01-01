#include<stdio.h>

int main()
{
    int i,j,flag;
    for(i=1;i<=100;i++)
    {
        flag=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                flag++;
        }
        if(flag==2||i==1)
            printf("%d\n",i);
        
    }
    return 0;
}