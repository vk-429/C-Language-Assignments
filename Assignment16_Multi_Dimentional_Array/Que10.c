#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter no. of rows and columns of matrix : ");
    scanf("%d%d",&m,&n);
    int i,j,a[m][n],count;
    int ans=0,row_index=0;
    printf("Enter elements of matrix :-\n");
    for(i=0;i<m;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
                count++;
        }
        if(count>ans)
        { 
            ans=count;
            row_index=i;
        }
    }
    printf("Row %d has maximum number of 1s : %d times",row_index+1,ans);
    return 0;
}