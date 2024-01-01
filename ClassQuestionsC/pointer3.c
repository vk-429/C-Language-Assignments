#include<stdio.h>
void input(int*,int);
void display(int*,int);
//&a[i]=&i[a]=&p[i]=&i[p]
//*(i+a)=*(a+i)=*(i+p)=*(p+i)
int main()
{
    int a[10];
    input(a,10);
    display(a,10);
    return 0;
}
void display(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d ",i[p]);
}
void input(int*p,int size)
{
    int i;
    printf("Enter %d numbers :",size);
    for(i=0;i<size;i++)
    scanf("%d",&i[p]);
}