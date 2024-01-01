#include<stdio.h>
union demo
{
    int i;
    char ch[2];
    double c;
};
int main()
{
    union demo a;
    printf("%d\n",sizeof(a));
    //a.c=327455546556473530;
    a.i=20;
    a.ch[1]='5';
    a.c=327455546556473530;
    printf("a.i = %d\n",a.i);
    printf("%d %d %d %d\n",a.ch[0],a.ch[1],a.ch[2],a.ch[3]);
    printf("%u %u %u %u\n",a.ch[0],a.ch[1],a.ch[2],a.ch[3]);
    printf("%c %c %c %c\n",a.ch[0],a.ch[1],a.ch[2],a.ch[3]);
    printf("%lf",a.c);
    //no illigal access
    return 0;
}