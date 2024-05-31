x=15;
#include<stdio.h>
b=15;
//a=30;
//x=15;
extern int b;
//b=15;
void fun();

int main()
{
    
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

    printf("%d\n",b);
    printf("%d\n",a);
    printf("%d\n",x);
    x=15;
    fun();
    
    return 0;
}
int a;
//a=30;
//b=15;
void fun()
{
    a=15;
    extern int x;
    printf("%d\n",a);
    //a=30;//error
}
//x=15;

/*
1. if extern variable is declared globally then it's initialisation 
shoul be done globaly not in any function but if extern variable is declared 
in any function then it should be initialized out of this function (either outside
all the functions or inside some other function)
2. we can not declare and initialise an extern variable in same function
3. Initialisation and use of a extern varible can be done anywhere in the program
(except the same function in which it is declared) 
*/
