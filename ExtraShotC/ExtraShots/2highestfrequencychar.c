#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="HighestFrequencyCHaracter\n";
    int size=strlen(str);
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(str[i]>str[j])
            {
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)printf("%c ",str[i]);
    printf("\n");
    int l=1;
    int ans=0;
    int index;
    for(int i=0;i<size-1;i++)
    {
        if(str[i]==str[i+1])l++;
        else
        {
            if(l>ans){ans=l;index=i;};
            l=1;
        }
    }
    if(l>ans)
    {
        ans=l;
        index=size-1;
    }
    printf("Highest frequency character = %c, frequency = %d\n",str[index],ans);
}