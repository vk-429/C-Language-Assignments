#include<stdio.h>

int main()
{
   int x=5,*p,**q,***r;
   p=&x;
   q=&p;
   r=&q;
   printf("%d %d %d %d\n",p,&r,*q,&x);
   printf("%d %d %d %d\n",**r,&q,**&p,x);
   printf("%d %d %d %d",***r,**q,*p,**&p);
   printf("%d %d %d %d",***r,*q-p,r,p-*q);
   return 0;  

}