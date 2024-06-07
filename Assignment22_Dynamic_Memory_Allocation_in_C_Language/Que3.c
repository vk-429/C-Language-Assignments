#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum=0,*p,i;
    printf("Enter how many numbers you would like to enter : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation is failed !");
        return 0;
    }
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        sum+=*(p+i);
    }
    printf("Sum is %d",sum);
    free(p);
    return 0;
}