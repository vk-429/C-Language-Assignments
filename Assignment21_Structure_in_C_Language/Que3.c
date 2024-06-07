#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void display(struct Employee E)
{
    printf("\n%d %s %f",E.id,E.name,E.salary);
}
struct Employee input()
{
    struct Employee E;
    printf("Enter employee id, name and salary : ");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.name,20,stdin);
    E.name[strlen(E.name)-1]='\0';
    scanf("%f",&E.salary);
    return E;
}
int main()
{   
    struct Employee E1;
    E1=input();
    display(E1);
    return 0;
}