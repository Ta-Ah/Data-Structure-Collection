#include <stdio.h>

void merging(int arr[], int low, int mid, int high)
{
    int brr[100], i, j, k; // brr is the secondary array
    i = low;   // first index of primary array (left sub array)
    j = mid + 1;  // first index of primary array (right sub array)
    k = low;  // initializing index of secondary array

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])  // if left sub array is smaller
        {
            brr[k] = arr[i];  // assigning left sub array element in the secondary array
            i++;
        }
        else   // if right sub array is smaller
        {
            brr[k] = arr[j];   // assigning right sub array element in the secondary array
            j++;
        }
        k++;  //incrementing secondary array index
    }
    if (j > high)  //right sub array element has run out
    {
        while (i <= mid)  //making sure that left sub array elements are remaining
        {
            brr[k] = arr[i];  //assigning remaining left sub array elements to the secondary array
            i++;
            k++;
        }
    }
    else    //left sub array element has run out
    {
        while (j <= high)  //making sure right sub array elements are remaining
        {
            brr[k] = arr[j];   //assigning remaining right sub array elements to the secondary array
            j++;
            k++;
        }
    }
    for (k = low; k <= high; k++)
    {
        arr[k] = brr[k];  // putting back the sorted array in the primary array
    }
}

void sorting(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;  // dividing

        sorting(arr, low, mid); // left sub array
        sorting(arr, mid + 1, high);  // right sub array

        merging(arr, low, mid, high);  //combining 2 sub arrays
    }
    else
        return;
}

int main()
{
    int size, low, high, k;
    printf("Enter array size ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    low = 0;
    high = size - 1;

    printf("\nBefore sorting\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    sorting(arr, low, high);

    printf("\nThe sorted array is\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* Time Complexity
---------------------------------------
==> wrost case (n log n)
==> best case (n log n)
---------------------------------------
*/
