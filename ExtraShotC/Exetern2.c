#include<stdio.h>
//extern int b;//=15;
//b=15;
//int a=25;
void f1();
extern int b=45;

//b=14;
//extern int b=45;
int main()
{
    //The variables declared as extern are not allocated any memory.
    //It intended to specify that the variable is declared elsewhere in the progaramm.
    extern int a;
    //We can only initialize extern variable globally or in any other fn but not in this function
    //a=5;

    //an external variable can be declared many times(qki memory to milti nhi declare krne se)but can be initialized at only once.
    extern int a;
    extern int a;
    //we can not use extern and initializer at same time.(locally allowed nhi but globally hai)
    //extern int a=0;

    
    printf("%d ",a);
    f1();
    //printf("%d",b);
}
a=30;//ye chlega qki extern bolta hai ki ghar ke bahr jake dundo left right khi bhi
void f1()
{
    
    a=50;
    b=23;
    printf("%d\n",b);
    printf("%d\n",a);
}