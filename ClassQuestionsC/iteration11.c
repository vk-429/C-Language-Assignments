#include<stdio.h>

int main()
{
    int i,j,k;
    //printf("Enter a number : ");
    //scanf("%d",&lines);
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=5;j++)
        { 
            if(j>=i){
                printf("%d",k);
                k++;
            }
            else
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}