#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char word[5][20]={"my","name","name","is","prateek"};
    char w1[20],w2[20];
    printf("Enter word1 : ");
    fgets(w1,20,stdin);
    w1[strlen(w1)-1]='\0';
    printf("Enter word2 : ");
    fgets(w2,20,stdin);
    w2[strlen(w2)-1]='\0';
    int i,j,i1,i2,r1,r2,c1=0,c2=0;
    int i3,i4;
    for(i=0;i<5;i++)
    {
        r1=strcmp(w1,word[i]);
        r2=strcmp(w2,word[i]);
        if(r1==0&&r2!=0)
            i1=i;
        if(r2==0&&r1!=0)        
            i2=i;
        if(r1==0&&r2==0)
        {
            printf("Both words are same");
            exit(0);
        }
        if(i1<i2)
        {
            if(r1==0&&r2!=0)
            {
                if(c1==0)
                i3=i;
                c1++;
            }
            if(r2==0&&r1!=0)  
            {
                if(c2==0)
                i4=i;
                c2++;
            }   
        }
        else
        {
            if(r1==0&&r2!=0)
                i3=i;
            if(r2==0&&r1!=0)
                i4=i;
        }
    }
    printf("Minimum distance between the words is %d",abs(i3-i4)-1);
    return 0;
}