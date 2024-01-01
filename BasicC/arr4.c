#include<stdio.h>
void StoreTable(int arr[][10],int m,int n)
{
    for(int i=0;i<10;i++)
        arr[m][i]=n*(i+1);
}
int main()
{
    int tables[2][10];
    StoreTable(tables,0,2);
    StoreTable(tables,1,3);
    for(int i=0;i<10;i++)
        printf("%d\t",tables[0][i]);
    printf("\n");
    for(int i=0;i<10;i++)
        printf("%d\t",tables[1][i]);
    return 0;
}