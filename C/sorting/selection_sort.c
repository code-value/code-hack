// C program for implementation of selection sort
#include <stdio.h>
 
void swap(int *xsp, int *ysp)
{
    int temp = *xsp;
    *xsp = *ysp;
    *ysp = temp;
}
// Selection sort function 
void selectionSort(int arr[], int n)
{
    int i, j, min_ind;
 
    // Move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find minimum element in unsorted array
        min_ind = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_ind])
            min_ind = j;
 
        // Swap the minimum element with the first element
        swap(&arr[min_ind], &arr[i]);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Main function
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("\nEnter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr, n);
    printf("\nSorted array: ");
    printArray(arr, n);
    return 0;
}

/*
Input:
5
1 5 3 7 6
Output:
1 3 5 6 7
*/
