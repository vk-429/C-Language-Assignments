#include<stdio.h>
#include<string.h>
struct student
{
    int marks;
    float cgpa;
    char name[40];
    char course[40];
};
int main()
{
    FILE *fptr;
    //fptr=fopen("C:/File/Student.txt","w");
    struct student s[5];
    printf("Enter the details of five students :-\n\n");
    for(int i=1;i<=5;i++)
    {
        printf("Enter details of student %d :-\n",i);
        printf("Enter marks : ");
        scanf("%d",&s[i].marks);
        printf("Enter cgpa : ");
        scanf("%f",&s[i].cgpa);
        fflush(stdin);
        printf("Enter name : ");
        fgets(s[i].name,40,stdin);
        s[i].name[strlen(s[i].name)-1]='\0';
        fflush(stdin);
        printf("Enter course name : ");
        fgets(s[i].course,40,stdin);
        s[i].course[strlen(s[i].course)-1]='\0';

    }
    fptr=fopen("C:/File/Student.txt","a");
    for(int i=1;i<=5;i++)
    {
        fprintf(fptr,"Name = %s\n",s[i].name);
        fprintf(fptr,"Course name = %s\n",s[i].course);
        fprintf(fptr,"Marks = %d\n",s[i].marks);
        fprintf(fptr,"CGPA = %f\n",s[i].cgpa);
    }
    fclose(fptr);return 0;
}