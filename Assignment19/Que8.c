#include<stdio.h>
#include<string.h>

int main()
{
    char S[5][20]={"the","quick","brown","clever","fox"},W1[20],W2[20];
    printf("Enter 1st word : ");
    scanf("%s",W1);
    printf("Enter 2nd word : ");
    scanf("%s",W2);
    int i,r1,r2,c1=0,c2=0,c3=0;
    for(i=0;i<5;i++)
    {
        r1=strcmp(S[i],W1);
        r2=strcmp(S[i],W2);
        if(r1==0)
            c1=1;
        if(r2==0)
            c2=1;
        if(c1==1&&c2==1)
            break;
        if((c1==1&&c2!=1)||(c1!=1&&c2==1))
            c3++;
    }
    if(c1==1&&c2==1)
    {
        if(c3<=4-c3)
            printf("The minimum distace between words is %d",c3-1);
        else
            printf("The minimum distace between words is %d",4-c3);
    }
    if(c1!=1||c2!=1)    
        printf("Check the words, either one of the word pr both words are not in the list!");
    return 0;
}