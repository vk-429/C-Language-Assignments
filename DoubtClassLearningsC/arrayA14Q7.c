#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int i,a[n],larg,S_larg;
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    larg=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>larg)
        {
            S_larg=larg;   
            larg=a[i];
        }
        else
        {
            if(a[i]>S_larg)
                S_larg=a[i];
        }
    }
    printf("Second largest value is %d",S_larg);
    return 0;
}