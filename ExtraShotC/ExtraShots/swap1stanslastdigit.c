#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int temp=n;
    int nd=0;
    while(temp)
    {
        temp/=10;
        nd++;
    }
    nd--;
    int mult=pow(10,nd);
    int ld=n%10;
    int fd=n/mult;
    n%=mult;
    n/=10;
    mult/=10;
    int ans=ld*mult+n;
    ans*=10;
    ans+=fd;
    printf("After Swapping :- \nNumber = %d",ans);
    return 0;
}