#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("C:/File/Test3.txt","r");
    if(fptr==NULL)
        printf("File does'nt created or not able to open the file\n");
    else
    {
        printf("File opened successfully\n");
        fclose(fptr);
    }
    return 0;
}