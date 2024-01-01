#include<stdio.h>
void swap(char S[],int i,int j)
{
    char temp;
    while(i<=j)
    {
        temp=S[i];
        S[i]=S[j];
        S[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str,100,stdin);
    int i=0,start=0,end=0,flag=0;
    while(str[i]!=10)
    {
        while(str[i]!=' ')
        {
            if(str[i]==10)
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        swap(str,start,end-1);
        if(flag==1)
            break;
        end++;
        start=end;
        i++;
    }
    swap(str,0,i-1);
    printf("%s",str);
    return 0;
}