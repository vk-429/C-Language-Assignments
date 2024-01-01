#include<stdio.h>
int main()
{
    int arr[10]={2,4,3,2,5,7,2,9,0,1},n;
    printf("Enter the number you want to search : ");
    scanf("%d",&n);
    int i,count=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
            count++;
    }
    printf("In the given array %d occures %d times",n,count);
    return 0;
}