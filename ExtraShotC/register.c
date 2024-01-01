#include<stdio.h>

int main()
{
    int *p;
    register int a;
    printf("%d",a);
    //we can not use & operator for the register variable
    p=&a;//not valid
    printf("%u ",&a);//&is not valid
    //we can not ude more than one storage specifier for the same variable.
    register /*static*/ int b;//ERROR
    return 0;
}