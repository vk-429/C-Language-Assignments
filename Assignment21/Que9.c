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
    int i,n;
    printf("Enter no. of students : ");
    scanf("%d",&n);
    struct Student S[n];
    for(i=0;i<n;i++)
        S[i]=input();
    for(i=0;i<n;i++)
        display(S[i]);
    return 0;
}