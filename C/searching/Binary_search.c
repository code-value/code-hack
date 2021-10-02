#include <stdio.h>
  
// A recursive binary search function.
int binarySearch(int arr[], int first, int last, int x)
{
    if (r >= l) {
        int mid = first + (last - l) / 2;
  
        // If the element is present at the middle
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, first, mid - 1, x);
  
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, last, x);
    }
  
    //When the element is not present in the array
    return -1;
}
  
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1)
    {
        printf("Element is not present in array")
    }
    else
    { 
        printf("Element is present at index %d",result+1);
    }
    return 0;
}

/*
Input:
5
3 6 9 10 15
6
Output:
2
*/
//The one of the main condition with binary search is the input array should be sorted.
