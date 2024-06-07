#include <stdio.h>

// Function to calculate the HCF (GCD) of two numbers
int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

// Function to left rotate an array by one position
void leftRotateByOne(int arr[], int length, int size) {
    int temp = arr[0];
    for (int i = 0; i < length - 1; i++)
        arr[i] = arr[i + 1];
    arr[length - 1] = temp;
}

// Function to right rotate an array by one position
void rightRotateByOne(int arr[], int length, int size) {
    int temp = arr[length - 1];
    for (int i = length - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}

// Function to rotate the array
void rotateArray(int arr[], int length, int n, char direction) {
    int h = hcf(length, n);
    int numRotations = n / h;

    if (direction == 'L') {
        for (int i = 0; i < numRotations; i++) {
            leftRotateByOne(arr, length, h);
        }
    } else if (direction == 'R') {
        for (int i = 0; i < numRotations; i++) {
            rightRotateByOne(arr, length, h);
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
    n = n % length;  // To handle cases where n >= length

    printf("Enter the direction (L for left, R for right): ");
    scanf(" %c", &direction);

    rotateArray(arr, length, n, direction);

    printf("Rotated array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
