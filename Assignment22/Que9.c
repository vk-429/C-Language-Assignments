#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    printf("Enter the amount of memory in bytes, you want to allocate : ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation failed !");
        return 0;
    }
    return 0;
}