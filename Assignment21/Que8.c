#include<stdio.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[20];
    float percnt;
};
struct Student input()
{
    struct Student S;
    printf("Enter student's Roll No., Name and Percentage : ");
    scanf("%d",&S.rollno);
    fflush(stdin);
    fgets(S.name,20,stdin);
    S.name[strlen(S.name)-1]='\0';
    scanf("%f",&S.percnt);
    return S;
}
void display(struct Student S)
{
    printf("\nRoll No. : %d\nName : %s\nPercentage : %f",S.rollno,S.name,S.percnt);
}
int main()
{
    struct Student S[10];
    int i;
    for(i=0;i<10;i++)
        S[i]=input();
    for(i=0;i<10;i++)
        display(S[i]);
    return 0;
}