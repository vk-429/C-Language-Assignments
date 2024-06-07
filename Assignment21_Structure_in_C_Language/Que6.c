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
void sortbyname(struct Employee E[],int size)
{
    int i,j,r;
    struct Employee temp;
    for(i=0;i<(size-1);i++)
    {
        for(j=i+1;j<size;j++)
        {
            r=strcmp(E[i].name,E[j].name);
            if(r==1)
            {
                temp=E[i];
                E[i]=E[j];
                E[j]=temp;
            }
        }
    }
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
    struct Employee E[10];
    int i;
    for(i=0;i<10;i++)
        E[i]=input();
    sortbyname(E,10);
    for(i=0;i<10;i++)
        display(E[i]);
    return 0;
}