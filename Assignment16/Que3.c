#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter values of 1st matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Transpose is given by :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}