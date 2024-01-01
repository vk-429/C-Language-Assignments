#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("C:/File/abc.txt","w");
    if(fptr==NULL)
        printf("File does'nt created or not able to open the file\n");
    else
    {
        printf("File Created Successfully\n");
        fprintf(fptr,"%s","APPLE I'll eat you");
        //fprintf(fptr,"%c",'\0');
    }
    fclose(fptr);
    fopen("C:/File/abc.txt","r");
    char ch;
    do{//fscanf(fptr,"%c",&ch);
    ch=fgetc(fptr);
    printf("%c",ch);
    }while(ch!=EOF);
    fclose(fptr);
    return 0;
}