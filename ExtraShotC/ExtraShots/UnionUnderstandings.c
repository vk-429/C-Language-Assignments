#include<stdio.h>

union US
{
    char c;
    int i;
    double d;
};

int main()
{
    union US us;
    us.d=124;
    us.i=1234567;
    us.c=32;
    printf("%d\n",us.c);
    printf("%d\n",us.i);
    printf("%lf\n",us.d);
    return 0;
}
/*

If you occupy all the memory space of the union with a
large double number and then assign a value to the int
variable, the behavior is undefined and could lead to
unexpected results or errors.

When you store a large double number in the union,
it occupies all 8 bytes of memory.
Then, when you try to assign a value to the int variable,
you are overwriting part of the memory occupied by the double.

This could result in data corruption or incorrect interpretations
of the values stored in the union. The exact outcome may depend 
on the specific compiler and platform you're using, but it's generally
not safe or reliable to access members of a union in this way.

In general, it's important to avoid scenarios where you're 
simultaneously accessing different members of a union that don't 
share the same memory space. Doing so can lead to undefined behavior 
and make your code difficult to understand and maintain.

*/

/*

Ah, I see. Let's clarify why the value of us.i doesn't affect us.d.

In the given code, you first assigned 124.0 to us.d. 
This value was stored as a double in the memory space shared 
by all members of the union. Then, you assigned 10 to us.i.

When you assign a new value to one member of the union, 
it updates the memory space shared by all members. However, 
the interpretation of the bits in memory depends on the data 
type of the member being accessed.

In the case of us.i, it's an int. When you assign 10 to us.i, 
the memory space is updated accordingly with the binary representation 
of 10.

However, when you access us.d, it interprets the bits in 
memory as a double. The binary representation of 124.0 that 
was initially assigned to us.d remains unchanged in memory. 
The bits representing 10 that were assigned to us.i do not alter 
the interpretation of us.d as a double.

So, even though you've assigned 10 to us.i, us.d still retains 
the value 124.0 because the interpretation of the memory content 
as a double remains unchanged.

*/