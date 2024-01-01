#include<stdio.h>

int main()
{
    int a,b,i,j,flag;
    printf("Enter the range : ");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
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