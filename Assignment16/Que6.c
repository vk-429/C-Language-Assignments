#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter no. of rows and columns of matrix : ");
    scanf("%d%d",&m,&n);
    int i,j,a[m][n],SR,SC;
    printf("Enter elements of the matrix :-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        SR=0;
        for(j=0;j<n;j++)
        {
            SR+=a[i][j];
        }
        printf("Sum of row %d is %d\n",i,SR);
    }
    for(i=0;i<n;i++)
    {
        SC=0;
        for(j=0;j<m;j++)
        {
            SC+=a[j][i];
        }
        printf("Sum of column %d is %d\n",i,SC);
    }
    return 0;
}