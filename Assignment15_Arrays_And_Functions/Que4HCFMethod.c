#include <stdio.h>

// Function to calculate the HCF (GCD) of two numbers
int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

// Function to left rotate an array by one position
void leftRotateByOne(int arr[],int length, int size) {
    int temp[size];
    int i,j;
    for(i=0;i<size;i++)temp[i]=arr[i];
    for (i = 0; i < length-size; i++)
        arr[i] = arr[size + i];
    for(j=0;j<size;j++)
    {
        arr[i]=temp[j];
        i++;
    }
}

// Function to right rotate an array by one position
void rightRotateByOne(int arr[],int length, int size) {
    int temp[size];
    int i,j;
    for(i=length-size,j=0;i<length;i++){temp[j]=arr[i];j++;}
    for (i = length-1; i >=size; i--)
        arr[i] = arr[i-size];
    for(j=size-1;j>=0;j--)
    {
        arr[i]=temp[j];
        i--;
    }
}

// Function to rotate the array
void rotateArray(int arr[], int length, int n, char direction) {
    int h = hcf(length, n);
    int numrot = n / h;
    for (int i = 0; i < numrot; i++) {
        if (direction == 'L') {
                leftRotateByOne(arr ,length, h);
        } else if (direction == 'R') {
                rightRotateByOne(arr,length, h);
        }
    }
}

int main() {
    int length, n;
    char direction;

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    int arr[length];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &n);

    printf("Enter the direction (L for left, R for right): ");
    scanf(" %c", &direction);

    n%=length;
    rotateArray(arr, length, n, direction);

    printf("Rotated array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
