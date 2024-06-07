#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter no. of rows and columns of matrix : ");
    scanf("%d%d",&m,&n);
    int i,j,a[m][n],count=0;
    printf("Enter elements of matrix :-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>(m*n)/2)
        printf("Given matrix is a sparse matrix");
    else
        printf("Given matrix is not a sparse matrix");
    return 0;
}