#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("C:/File/String.txt","r");
    //char str[50];
    int count=0;
    char ch;
    do{
        ch=fgetc(fptr);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            count++;
        
    }while(ch!=EOF);
    fclose(fptr);
    fptr=fopen("C:/File/String.txt","w");
    fprintf(fptr,"%d",count);    
    fclose(fptr);
    return 0;
}