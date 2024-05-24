#include<stdio.h>
#include<string.h>
#include<math.h>

int max(int a,int b)
{
    if(a>b)return a;
    return b;
}
int min(int a,int b)
{
    if(a<b)return a;
    return b;
}
int main()
{
    char S[5][20]={"the","quick","brown","clever","fox"},W1[20],W2[20];
    printf("Enter 1st word : ");
    scanf("%s",W1);
    printf("Enter 2nd word : ");
    scanf("%s",W2);
    int i,r1,r2,c1=-1,c2=-1;
    for(i=0;i<5;i++)
    {
        r1=strcmp(S[i],W1);
        r2=strcmp(S[i],W2);
        if(r1==0)
            c1=i;
        if(r2==0)
            c2=i;
    }
    int ans=min((abs(c1-c2)-1),(5-max(c1,c2)-1+min(c1,c2)));
    if(c1!=-1 && c2!=-1)
        printf("Minimum distance is %d\n",ans);
    else
        printf("Either one or both of the words is not in the list\n");
    return 0;
}