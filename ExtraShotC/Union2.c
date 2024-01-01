#include<stdio.h>
struct store
{
    double price;
    union 
    {
        struct
        {
            char *title;
            char *auther;
            int num_pages;
        }book;
        struct
        {
            int color;
            int size;
            char *design;
        }shirt;  
    }item;
    
};
int main()
{
    struct store s;
    s.item.book.title="The Alchemist";
    s.item.book.auther="Paulo Coelho";
    s.item.book.num_pages=197;
    printf("%s\n",s.item.book.title);
    printf("%d ",sizeof(s));
    return 0;
}