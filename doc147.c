//searching an array using pointer 

#include <stdio.h>

#define MAX_SIZE 100


void inputArray(int * arr, int size);
int search(int * arr, int size, int toSearch);



int main()
{
    int array[MAX_SIZE];
    int size, toSearch, searchIndex;


    
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    inputArray(array, size);


    printf("Enter element to search: ");
    scanf("%d", &toSearch);


    searchIndex = search(array, size, toSearch);


    if(searchIndex == -1)
        printf("%d does not exists in array.", toSearch);
    else
        printf("%d is found at %d position.", toSearch, searchIndex + 1);


    return 0;
}





void inputArray(int * arr, int size)
{
   
    int * arrEnd = (arr + size - 1);


   
    while(arr <= arrEnd)
    {
        scanf("%d", arr++);
    }
}





int search(int * arr, int size, int toSearch)
{
    int index = 0;

    int * arrEnd = (arr + size - 1);

    
    while(arr <= arrEnd && *arr != toSearch) {
        arr++;
        index++;
    }


    if(arr <= arrEnd)
        return index;
    
    return -1;
}
