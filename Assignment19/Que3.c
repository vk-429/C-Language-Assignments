#include<stdio.h>

int main()
{
    char S[5][40];
    printf("Enter 5 strings : ");
    int i;
    for(i=0;i<5;i++)
        fgets(S[i],40,stdin);
    printf("\n");
    for(i=0;i<5;i++)
        printf("%s",S[i]);
    return 0;
}