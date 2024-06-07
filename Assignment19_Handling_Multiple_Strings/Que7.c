#include<stdio.h>
int main()
{
    char IPL[5][20];
    printf("Enter the list of IP Adress : ");
    int i,j,k,a[5]={0},b[5][4]={0},count,flag,c1=0;
    for(i=0;i<5;i++)
        fgets(IPL[i],20,stdin);
    for(i=0;i<5;i++)
    {
        flag=0;
        for(j=0;IPL[i][j];j++)
        {
            if(IPL[i][j]=='.')
                a[i]++;
        }
        count=0;
        for(j=0;j<4;j++)
        {
            for(k=count;IPL[i][k]!='.';k++)
            {
                if(IPL[i][k]==10)
                    break;
                b[i][j]=(b[i][j]*10)+(IPL[i][k]-48);
                count++;
            }
            count++;
            if((a[i]!=3)||b[i][j]<0||b[i][j]>255)
            {
                c1++;
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("\n%s",IPL[i]);
    }
    if(c1==0)
        printf("All IP Adresses are valid");
    
}