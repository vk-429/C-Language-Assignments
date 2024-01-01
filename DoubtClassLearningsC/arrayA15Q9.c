#include<stdio.h>

int main()
{
    int a[]={1,3,9,11,15};
    int b[]={2,6,8,9,10};
    int c[10],i=0,j=0,k,p;
    for(k=0;k<10;k++)
    {
        if(i>=5||j>=5)
        {
            if(i>=5)
            {
                c[k]=b[j];
                j++;
                if(j==5)
                    goto p;
            }
            if(j>=5)
            {
                c[k]=a[i];
                i++;
                if(i==5)
                    goto p;
            }
        }
        else
        {
            if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
            }
            else
            {
                c[k]=b[j];
                j++;
            }
        }
        p:printf("%d ",c[k]);
    }
    return 0;
}