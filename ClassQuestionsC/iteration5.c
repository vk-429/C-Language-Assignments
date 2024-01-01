#include<stdio.h>

int main()
{
   int n,i,sum=0,count=1;
   for(i=1;i<=count;i++)
   {
      printf("Enter a number : ");
      scanf("%d",&n);
      if(n==0)
         break;
      else
         count++;
      sum=sum+n;
   }
   printf("Sum is %d",sum);
   return 0;
}