#include<stdio.h>
#define LIMIT 5

//Function like macro
#define AREA(l,b) (l*b)
#define MIN(a,b) (((a)<(b)) ? (a) : (b))
//Chain Macro
#define YOUTUBE FOLLOWERS
#define FOLLOWERS 776
int main()
{
    printf("The value of LIMIT is %d\n",LIMIT);
    int area = AREA(2,4);//Preprocessor --> int area = (2*4);copiler will see this, not a function call 
    printf("Area of rectangle is : %d\n",area);
    printf("Minimum value between %d and %d is %d\n",5,10,MIN(5,10));
    printf("MySirG have %d K followers on YOUTUBE",YOUTUBE);
    return 0;
}
