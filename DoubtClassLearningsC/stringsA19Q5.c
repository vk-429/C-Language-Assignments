#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][30];
    int i,j,vowel=0,c;
    printf("Enter email addresses : ");
    for(i=0;i<3;i++)
    {
        fgets(a[i],30,stdin);
        a[i][strlen(a[i])-1]='\0';
    }
    for(i=0;i<3;i++)
    {
        if(strchr(a[i],'@')==0)
        {
            printf("%s\n",a[i]);
            c++;
        }
    }
    if(c==0)
        printf("All email adresses have @ symbol");
    return 0;

}