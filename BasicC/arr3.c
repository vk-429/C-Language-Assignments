#include<stdio.h>
int main()
{
    int array[100];
    int size, element;

    printf("Enter the size of the array (maximum %d): ", 100);
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    // Inserting element at the end of the array
    array[size] = element;
    size++;

    printf("Array after inserting the element at the end: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }

    return 0;
}
