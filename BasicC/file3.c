#include<stdio.h>
//Read 5 integers from a file
int main()
{
    FILE *fptr;
    fptr=fopen("C:/File/Test.txt","r");
    int n;
    for(int i=0;i<5;i++)
    {
        fscanf(fptr,"%d",&n);
        printf("Number = %d\n",n);
    }
    fclose(fptr);
    return 0;
}