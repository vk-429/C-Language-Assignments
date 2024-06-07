#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee input()
{
    struct Employee E;
    printf("Enter employee id, name and salary : ");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.name,20,stdin);
    scanf("%f",&E.salary);
    return E;
}
int main()
{   
    struct Employee E1;
    E1=input();
    return 0;
}