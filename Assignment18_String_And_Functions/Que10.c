#include<stdio.h>
void findrptd(char[]);
int main()
{
    char str[100];
    findrptd(str);
    return 0;
}
void findrptd(char S[])
{
    printf("Enter string : ");
    fgets(S,100,stdin);
    int i,j,a[256]={0};
    for(i=0;i<256;i++)
    {
        for(j=0;S[j];j++)
        {
            if(S[j]==32)
                continue;
            if(i==S[j])
                a[i]++;
        }
        if(a[i]>1)
            printf("%c ",i);
    }
}