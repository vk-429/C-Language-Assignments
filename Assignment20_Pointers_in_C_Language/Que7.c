#include<stdio.h>

int main()
{
    char str[50],*p;
    p=str;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    int i,v=0,c=0;
    for(i=0;*(p+i);i++)
    {
        if((*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z'))
        {
            if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
                v++;
            else
                c++;
        }
    }
    printf("No. of vovels is %d and no. of consonants is %d",v,c);
    return 0;
}