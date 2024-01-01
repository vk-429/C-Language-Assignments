#include<stdio.h>

int main()
{
    int n,i;
    for(i=1;i<=3;i++)
    {
       printf("\nEnter an even number : ");
       scanf("%d",&n);
          if(n%2==0)
          break;
    }
    if(i==4)
        printf("\nGadhe ho tum, padhne baitho");
    else
        printf("\nSabas,you are insan,jao khelo");
}