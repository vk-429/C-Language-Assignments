#include<stdio.h>
#include<stdlib.h>
/*Here we are taking a example to calculate the area and volume of a cube,
To demonstrate the Dangling Pointer*/
int main()
{
    /*First of all we make a pointer variable which will store the 
    adress of that DMA variable which will store the value of side of the cube*/
    int *side,area,volume;
    side=(int*)malloc(sizeof(int));
    printf("Enter value of side of the cube : ");
    scanf("%d",side);
    area=(*side)*(*side);
    printf("Area of cube is %d\n",area);
    /*After calculating the area we accedently free the address of the variable
    which is storing the value of side*/
    free(side);
    /*Now if well use * to access the varible which is containing side,
    we cant because the address is released and now it will poit to a unknown
    location, where some garbage value is stored. Hence the use of *side in the
    calculation of volume of the cube becomes illigal and side becomes a dangling 
    pointer*/
    volume=area*(*side);
    printf("Volume of the cube is %d",volume);
    /*Also after running the program we are getting volume as a garbage value 
    which is varyfying the above things.*/
    return 0;
}