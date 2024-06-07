#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*p,max;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    max=*p;
    for(i=1;i<n;i++)
    {
        if(max<*(p+i))
            max=*(p+i);
    }
    printf("Largest element is %d",max);
    free(p);
    return 0;
}