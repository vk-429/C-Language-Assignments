#include<stdio.h>

int main()
{
    int a,b,i,j,flag;
    printf("Enter the range : ");
    scanf("%d%d",&a,&b);
    if(a==1) a++;
    for(i=a;i<=b;i++)
    {
        flag=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d\n",i);
        
    }
    return 0;
}