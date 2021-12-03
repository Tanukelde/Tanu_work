//find the reverse of an array
#include<stdio.h>
#define MAX_SIZE 100    
int reverse(int []);

int main()
{
  int b;
  reverse(b);
}

int reverse(int b[])
{
   int arr[MAX_SIZE];
    int size, i;

    /* Input size of array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    
       //Print array in reversed order
     
    printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }
}


    

