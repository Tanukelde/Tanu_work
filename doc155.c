////sort array using pointer
#include <stdio.h>
#define MAX_SIZE 100
void inputArray(int * arr, int size);
void printArray(int * arr, int size);
int sortAscending(int * num1, int * num2);
int sortDescending(int * num1, int * num2);
void sort(int * arr, int size, int (* compare)(int *, int *));

int main()
{
    int arr[MAX_SIZE];
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    inputArray(arr, size);

    printf("\n\nElements before sorting: ");
    printArray(arr, size);
// Sort and print sorted array in ascending order.
    printf("\n\nArray in ascending order: ");
    sort(arr, size, sortAscending);
    printArray(arr, size);
// Sort and print sorted array in descending order.
    printf("\nArray in descending order: ");
    sort(arr, size, sortDescending);
    printArray(arr, size);
    
    return 0;
}

void inputArray(int * arr, int size)
{
    // Pointer to last element of array
    int * arrEnd = (arr + size - 1);


    // (arr++) Input in current array element and move to next element.
    // Till last array element (arr <= arrEnd)
    while(arr <= arrEnd)
        scanf("%d", arr++);
}
void printArray(int * arr, int size)
{
    // Pointer to last element of array
    int * arrEnd = (arr + size - 1);


    // *(arr++) Print current array element and move to next element.
    // Till last array element (arr <= arrEnd)
    while(arr <= arrEnd)
        printf("%d, ", *(arr++));
}



