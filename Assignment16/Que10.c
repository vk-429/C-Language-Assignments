#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter no. of rows and columns of matrix : ");
    scanf("%d%d",&m,&n);
    int i,j,a[m][n],b[m],c[m],count;
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
        b[i]=count;
        c[i]=b[i];
    }
    int count1;
    for(i=0;i<m;i++)
    {
        count1=0;
        for(j=0;j<m;j++)
        {
            if(c[i]>b[j])
             count1++;
        }
        if(count1==(m-1))
        {
            printf("Row %d has maximum number of 1s",i);
            break;
        }
    }
    return 0;
}