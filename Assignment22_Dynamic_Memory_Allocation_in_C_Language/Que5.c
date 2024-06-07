#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,sum=0;
    printf("Enter the no. of numbers : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        sum+=*(p+i);
    }
    printf("Sum is %d and elemnts are given as :-\n",sum);
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    free(p);
    return 0;
}