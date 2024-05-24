#include<stdio.h>

int main()
{
    int (*a)[5];
    int b[1][5]={1,2,3,4,5};
    a=b;
    printf("%d %d \n",a,*a);
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d %d %d\n",*(*a+i),(a+i),(*a+i));
    }
    printf("\n\n\n\n\n");

    
    int arr[]={1,2,3};
    int c[]={4,5,6,7};
    int *ptr[2];
    ptr[0]=arr;
    ptr[1]=c;
    for(i=0;i<3;i++)
        printf("Value of arr[%d] = %d\n",i,ptr[0][i]);
    for(i=0;i<4;i++)
        printf("Value of c[%d] = %d\n",i,ptr[1][i]);
    printf("\n\n\n\n\n");


    char *name[]={"amit","amar","ankit","akhil"};
    for(int i=0;i<4;i++)
        printf("%s\n",name[i]);
    return 0;
}