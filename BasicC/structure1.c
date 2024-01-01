#include<stdio.h>
struct student
{
    int rollno;
    int age;
    char name[20];
};
struct teacher
{
    int teacherid;
    int age;
    char name[20];
};
struct staff
{
    int employeeid;
    int age;
    char name[20];
};
int main()
{
    struct student s1={1,20,"Vaibhav"};
    struct teacher t1={2,45,"Rajiv"};
    struct staff st1={3,35,"Ranjeet"};
    printf("Student information :-\n");
    printf("Roll No. = %d\nAge = %d\nName = %s",s1.rollno,s1.age,s1.name);
    printf("\n\n#######################################\n\n");
    printf("Teacher information :-\n");
    printf("Teacher ID = %d\nAge = %d\nName = %s",t1.teacherid,t1.age,t1.name);
    printf("\n\n#######################################\n\n");
    printf("Staff information :-\n");
    printf("Employee ID = %d\nAge = %d\nName = %s",st1.employeeid,st1.age,st1.name);
    printf("\n\n#######################################\n\n");
    return 0;
}