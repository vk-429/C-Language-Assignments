#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("C:/File/Student.txt","w");
    char name[40];
    int age;
    float cgpa;
    printf("Enter student name : ");
    fgets(name,40,stdin);
    printf("Enter age : ");
    scanf("%d",&age);
    printf("Enter Cgpa : ");
    scanf("%f",&cgpa);
    fprintf(fptr,"%s\n",name);
    fprintf(fptr,"%d\n",age);
    fprintf(fptr,"%f\n",cgpa);
    fclose(fptr);
    return 0;
}