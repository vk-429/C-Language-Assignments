#include<stdio.h>

int main()
{
    int n,i,j,k,l;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=1;
        l=i;
        for(j=0;j<2*n-1;j++)
        {
            if(j<n-1-i||j>n-1+i)
                printf(" ");
            else if(j<=n-1&&j>=n-1-i)
                printf("%d",k++);
            else
            {
                printf("%d",l--);
            }
        }
        printf("\n");
    }
}