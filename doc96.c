//find a maximum and minimum element in an array -using recursion
/* #include<stdio.h>
 int maxmin(int);
 
 int maxmin(int k)
 {
   int a[1000],i,n,min,max;
   printf("enter the number\n");
   scanf("%d",&n);
   
   printf("enter the element\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   min= max =a[0];
   for(i=1;i<n;i++)
   {
    if(min>a[i])
    min=a[i];
    if(max<a[i])
    max=a[i];
   }
   printf("minimum of array %d\n",min);
   printf("maximum of array %d\n",max);
 }
 int main()
 {
  int k;
  maxmin(k);
 }*/
 
 #include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the array

/* Function declarations */
int maximum(int array[], int index, int len);
int minimum(int array[], int index, int len);


int main()
{
    int array[MAX_SIZE], N, max, min;
    int i;

    /* Input size and elements of array */
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter %d elements in array: ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    max = maximum(array, 0, N);
    min = minimum(array, 0, N);

    printf("Minimum element in array = %d\n", min);
    printf("Maximum element in array = %d\n", max);

    return 0;
}


/**
 * Recursive function to find maximum element in the given array.
 */
int maximum(int array[], int index, int len)
{
    int max;

    /*
     * Only last and second last element are left
     */
    if(index >= len-2)
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }


    /*
     * Recursively call maximum to find maximum element in
     * right side of the array from current index.
     */
    max = maximum(array, index + 1, len);

    /*
     * Compare the current array element with maximum 
     * element on its right side
     */
    if(array[index] > max)
        return array[index];
    else
        return max;
}


/**
 * Recursive function to find minimum element in the array.
 */
int minimum(int array[], int index, int len)
{
    int min;

    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    min = minimum(array, index + 1, len);

    if(array[index] < min)
        return array[index];
    else
        return min;
}
