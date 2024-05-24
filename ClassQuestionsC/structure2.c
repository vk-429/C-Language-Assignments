#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//global definition
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(struct book b)
{
    printf("\n%d %s %f",b.bookid,b.title,b.price);
}
struct book input()
{
    struct book b;
    printf("Enter bookid, title and price of a book : ");
    scanf("%d",&b.bookid);
    fflush(stdin);
    fgets(b.title,20,stdin);
    b.title[strlen(b.title)-1]='\0';
    scanf("%f",&b.price);
    return b;
}
void sortByPrice(struct book b[],int size)
{
    int r,i;
    struct book temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(b[i].price>b[i+1].price)
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
    }
}
int main()
{
    struct book b[5];
    int i;
    //system("COLOR fc");
    for(i=0;i<=4;i++)
        b[i]=input();
    sortByPrice(b,5);
    for(i=0;i<=4;i++)
        display(b[i]);
    return 0;
}