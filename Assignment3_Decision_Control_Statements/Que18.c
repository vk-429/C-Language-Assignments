#include<stdio.h>

int main()
{
    int mn;
    printf("Enter month number(1 to 12) : ");
    scanf("%d",&mn);
    if(mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)
        printf("31 Days");
    else if(mn==2)
        printf("28 or 29 Days");
    else if(mn==4||mn==6||mn==9||mn==11)
        printf("30 Days");
    else    
        printf("Invalid input");
    return 0;
}