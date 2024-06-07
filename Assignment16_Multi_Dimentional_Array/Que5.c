#include<stdio.h>

int main()
{
    int n;
    printf("Enter order of matrix : ");
    scanf("%d",&n);
    int i,j,a[n][n],sum=0;
    printf("Enter elements of the matrix :-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
                sum+=a[i][j];
        }
    }
    printf("Sum of left diagonal elements of the matrix is %d",sum);
    return 0;
}