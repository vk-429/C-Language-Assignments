#include<stdio.h>

int main()
{
    int n;
    printf("Enter order of matrix : ");
    scanf("%d",&n);
    int i,j,a[n][n];
    printf("Enter elements of matrix : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
                printf("%d ",a[i][j]);
            else
            {
                a[i][j]=0;
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}