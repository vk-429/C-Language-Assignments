#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="Blank Spaces    Hatao";
    int size=strlen(str);
    int i,j;
    char ans[size+1];
    j=0;
    for(i=0;i<size;i++)
    {
        if(str[i]!=' ')
        {
            ans[j]=str[i];
            j++;
        }
    }
    ans[j]='\0';
    printf("%s",ans);
    return 0;
}