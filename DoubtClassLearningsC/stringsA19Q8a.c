#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char words[5][20]={"my","name","name","is","prateek"};
    char word1[]="my";
    char word2[]="is";
    int i,w1=-1,w2=-1,min=9999999,temp;
    for(i=0;i<5;i++)
    {
        if(strcmp(words[i],word1)==0)
            w1=i;
        if(strcmp(words[i],word2)==0)
            w2=i;
    }
    if(w1!=-1&&w2!=-1)
    {
        temp=abs(w2-w1);
        if(temp<min)
            min=temp;
        if(min>(5-w2+w1)) min=5-w2+w1;
    }
    if(w1==w2)
    {
        printf("Both words are same");
        exit(0);
    }
    printf("minimum distance is %d",min-1);
    return 0;
}