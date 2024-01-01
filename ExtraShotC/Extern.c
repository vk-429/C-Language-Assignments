#include<stdio.h>
extern int b=15;
int main()
{
    //b=15;
    //The variables declared as extern are not allocated any memory.
    //It intended to specify that the variable is declared elsewhere in the progaramm.
    extern int a;
    //We can only initialize extern variable globally.
    //a=5;

    //an external variable can be declared many times(qki memory to milti nhi declare krne se)but can be initialized at only once.
    extern int a;
    extern int a;
    //we can not use extern and initializer at same time.(locally allowed nhi but globally hai)
    //extern int a=0;

    printf("%d",b);
}
//a=30;