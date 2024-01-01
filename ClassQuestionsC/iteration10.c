#include<stdio.h>

int main()
{
    int i,j,lines;
    printf("Enter a number : ");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=lines;j++)
        { 
            if(j>=i)
                printf("%d",j+1-i);
            else
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}