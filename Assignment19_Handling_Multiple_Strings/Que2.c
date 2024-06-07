#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][40],temp[10][40];
    printf("Enter 10 city names : ");
    int i,j,k,r,r1,flag=0;
    for(i=0;i<10;i++)
        fgets(str[i],40,stdin);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            r=strcmp(str[i],str[j]);
            if(r==1)
            {
                strcpy(temp[i],str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp[i]);
            }
        }
    }
    printf("\n");
    for(i=0;i<10;i++)
        printf("%s",str[i]);
    return 0;
}
