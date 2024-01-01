#include<stdio.h>
#include<math.h>
union abc
{
    int a;
    char b;
    double c;
}var;
 
int main()
{
   
    var.b=253;
    var.a=(pow(2,15));
    var.c=12342421645234445;
    printf("a = %d\n",var.a);
    printf("b = %d\n",var.b);
    printf("c = %lf\n",var.c);
    return 0;
}