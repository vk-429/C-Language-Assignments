#include<stdio.h>
/*Here we are taking the example od adding 
two numbers with the help of pointers to demonstrate*/
int main()
{
    /*declaration data type of pointers should be same as
    the data type of the vaiable, which address it contains.
    use * just before the varible name while declaring 
    a pointer variable to differentiate it from ordinary variables*/
    int a,b,*p,*q,sum;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    //now assign the reqired addresses to the pointer variables
    p=&a;
    q=&b;
    /*now, to access the values of the varibles, 
    which adress is contained by it, use derefrencing operator(*)
    just before the poiner varible*/
    sum=*p+*q;
    printf("Sum is %d",sum);
    return 0;
}