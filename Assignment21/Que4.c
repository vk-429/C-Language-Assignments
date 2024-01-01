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
    printf("\n%d %s Rs.%f",E.id,E.name,E.salary);
}
struct Employee HighSal(struct Employee E[],int size)
{
    int i;
    struct Employee max;
    max=E[0];
    for(i=1;i<size;i++)
    {
        if(max.salary<E[i].salary)
            max=E[i];
    }
    return max;
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
    struct Employee E[10],max;
    int i;
    for(i=0;i<10;i++)
        E[i]=input();
    max=HighSal(E,10);
    display(max);
    return 0;
}