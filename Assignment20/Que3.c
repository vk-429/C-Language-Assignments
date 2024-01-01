#include<stdio.h>
void sort(int*p,int size)
{
    int i,j;
    for(i=0;i<(size-1);i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(p+i)>*(p+j))//p[i]>p[j]
            {
                *(p+i)=*(p+i)+*(p+j);
                *(p+j)=*(p+i)-*(p+j);
                *(p+i)=*(p+i)-*(p+j);
                /*p[i]=p[i]+p[j]
                  p[j]=p[i]-p[j]
                  p[i]=p[i]-p[j]*/
            }
        }
    }
}
int main()
{
    int i,size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter values of the array : ");
    for(i=0;i<size;i++)
        scanf("%d",a+i);
    sort(a,size);
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    return 0;
}