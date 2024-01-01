#include<stdio.h>
enum week{Mon,Tue,Wed,Thur,Fri,Sat,Sun};//by default Mon=0,Tue=1 and so on...
enum State{Working=1,Failed=0,Freezed=0};//You can also assign value in any order and even repeated values
enum day{sunday=1,monday,tuesday=5,wednesday,thursday=10,friday,saturday};//monday=1+1,wednesday=5+1,friday=10+1 ...
enum State{working,failed};//error
//enum result{failed,passed};//error, we can't give same name to constants made in two different enums
enum State currState=2;// current state
int main()
{
    enum week day;
    day=Wed;
    printf("%d\n",day);
    int i;
    for(i=Mon;i<=Sun;i++)
        printf("%d ",i);
    printf("\n%d, %d, %d",Working,Failed,Freezed);
    printf("\n%d %d %d %d %d %d %d\n",sunday,monday,tuesday,wednesday,thursday,friday,saturday);
    (currState == Tue)? printf("WORKING"):printf("NOT WORKING");
    return 0;
}