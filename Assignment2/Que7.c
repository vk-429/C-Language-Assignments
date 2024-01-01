#include<stdio.h>

int main()
{ 
    int n,result,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        result=n&1;
        count++;
        if(result==1)
        {
            printf("Position of first 1 in LSB is %d",count);
            break;
        }
        n=n>>1;
    }
    return 0;
}