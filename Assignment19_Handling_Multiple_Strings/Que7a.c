#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isValidIP(char *ip) {
    int num,count=0;
    char *ptr;

    for(int i=0;ip[i];i++)
        if(ip[i]=='.') count++;
    if(count!=3) return 0;

    if (ip == NULL)
        return 0;

    ptr = strtok(ip, ".");
    if (ptr == NULL)
        return 0;

    while (ptr) 
    {   
        num = atoi(ptr);
        if (num >= 0 && num <= 255) 
            ptr = strtok(NULL, ".");
        else return 0;
    }
    return 1;
}

int main() {
    char IPL[5][20];
    printf("Enter the list of IP Addresses: \n");

    for (int i = 0; i < 5; i++) {
        fgets(IPL[i], 20, stdin);
        // Remove the newline character if present
        IPL[i][strcspn(IPL[i], "\n")] = '\0';
    }

    int invalidCount = 0;
    for (int i = 0; i < 5; i++) {
        // Create a copy of the IP address for validation
        char ipCopy[20];
        strcpy(ipCopy, IPL[i]);

        if (isValidIP(ipCopy)) {
            printf("Valid IP: %s\n", IPL[i]);
        } else {
            printf("Invalid IP: %s\n", IPL[i]);
            invalidCount++;
        }
    }

    if (invalidCount == 0) {
        printf("All IP Addresses are valid\n");
    } else {
        printf("%d IP Address(es) are invalid\n", invalidCount);
    }

    return 0;
}
