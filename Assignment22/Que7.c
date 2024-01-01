/*Program to Demonstrate the Memory Leak
Here we are taking the example of memory leak in DMA*/
#include<stdio.h>
#include<stdlib.h>
void add()
{
    int *p,*q;
    p=(int*)malloc(sizeof(int));
    q=(int*)malloc(sizeof(int));
    *p=5;
    *q=10;
    printf("Sum is %d",*p+*q);
}
int main()
{
    add();
    /*Here after the comlishment of the work of the add function
     variable p and q will destroy as they are SMA variables but the memory of 
     those variables, who's address is contained by variables p and q will not
     release as they are DMA variables and also due to destruction of p and q
     we cant access the DMA variables. Hence, we can't use the memory which is
     occupied by DMA variables and also we can't release it.Therefore leak of 
     memory happens here.*/
    return 0;
}