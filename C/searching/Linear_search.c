// Linear Search in C
#include <stdio.h>

int search(int arr[], int n, int x)
{
    int i;
    //Compare each element of the array with search element
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}
 
// Main function
int main(void)
{
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("\nEnter the search element: ");
    scanf("%d",&x);
   
    // Function call
    int result = search(arr, n, x);
    if(result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is present at index %d", result+1);
    }
    return 0;
}
