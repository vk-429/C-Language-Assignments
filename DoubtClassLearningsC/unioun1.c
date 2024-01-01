#include<stdio.h>
union demo
{
    int i;
    char ch[2];
};
int main()
{
    union demo a;
    a.i=32770;
    printf("a.i = %d\n",a.i);
    printf("%d %d %d %d\n",a.ch[0],a.ch[1],a.ch[2],a.ch[3]);
    printf("%u %u %u %u\n",a.ch[0],a.ch[1],a.ch[2],a.ch[3]);
    printf("%c %c %c %c\n",a.ch[0],a.ch[1],a.ch[2],a.ch[3]);
    //no illigal access
    return 0;
}