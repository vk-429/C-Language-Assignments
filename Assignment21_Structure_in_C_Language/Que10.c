#include<stdio.h>
#include<string.h>
struct Marks
{
    int rollno,chem_marks,math_marks,phy_marks;
    char name[20];
    float prcnt;
};
struct Marks input()
{
    struct Marks M;
    printf("Enter Roll No., Name, chem marks, math marks, phy marks(0<=marks<=100) : ");
    scanf("%d",&M.rollno);
    fflush(stdin);
    fgets(M.name,20,stdin);
    M.name[strlen(M.name)-1]='\0';
    scanf("%d%d%d",&M.chem_marks,&M.math_marks,&M.phy_marks);
    M.prcnt=(M.chem_marks+M.math_marks+M.phy_marks)/3.0;
    return M;
}
void display (struct Marks M)
{
    printf("\nRoll No. : %d\nName : %s\nPercentage : %f",M.rollno,M.name,M.prcnt);
}
int main()
{
    struct Marks M[5];
    int i;
    float prcnt;
    for(i=0;i<5;i++)
        M[i]=input();
    for(i=0;i<5;i++)
        display(M[i]);
    return 0;
}