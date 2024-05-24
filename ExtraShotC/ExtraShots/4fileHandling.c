#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    fptr = fopen("C:/Users/VIVEK KUMAR/Documents/Test.txt", "r");
    char s[100]="File Handling Krte Hain C me Thoda";
    if (fptr != NULL) {
        printf("File Opened\n");
        // Close the file after successful opening
        fptr=fopen("C:/Users/VIVEK KUMAR/Documents/Test.txt","w");
        fprintf(fptr,"%s",s);
        fclose(fptr);
        
        fptr=fopen("C:/Users/VIVEK KUMAR/Documents/Test.txt","r");
        char ch;
        ch=fgetc(fptr);
        int count=0;
        while(ch!=EOF)
        {
            if(ch=='i'||ch=='o'||ch=='u'||ch=='a'||ch=='e'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                count++;
            printf("%c",ch);
            ch=fgetc(fptr);
        }
        fclose(fptr);
        fptr=fopen("C:/Users/VIVEK KUMAR/Documents/Test.txt","w");
        fprintf(fptr,"%d",count);
        fclose(fptr);
        int a;
        fptr=fopen("C:/Users/VIVEK KUMAR/Documents/Test.txt","r");
        fscanf(fptr,"%d",&a);
        printf("%d",a);
        fclose(fptr);
    } else {
        perror("Error");
        printf("File not Opened\n");
    }
    
    return 0;
}
