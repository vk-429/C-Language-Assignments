#include<stdio.h>
#include<string.h>
//global definition
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(struct book b)
{
    printf("\n%d %s %f\n",b.bookid,b.title,b.price);
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
int main()
{
    struct book b1={1,"cpp",340.0f};
    struct book b2,b3;
    b3.bookid=3;
    strcpy(b3.title,"java");
    b3.price=300.0f;
    b2=input();
    display(b1);
    display(b2);
    display(b3);
    return 0;
}