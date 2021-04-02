#include <bits/stdc++.h>

int searching(int arr[], int size, int low, int high, int k)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2; //<-----Best of approach to find the mid----->
        if (k == arr[mid])
            return mid;
        else if (k < arr[mid])
            searching(arr, size, low, mid - 1, k); //<-----data lies before mid----->
        else
            searching(arr, size, mid + 1, high, k); //<-----data lies after mid----->
    }
    return -1; //<-----data not found----->
}

int main()
{
    int size, k, i;
    printf("Enter array size ");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter array elements\n"); // <-----Must be in sorted order----->
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the data you are looking for ");
    scanf("%d", &k);

    int low = 0, high = size - 1;
    int rslt = searching(arr, size, low, high, k);

    if (rslt != -1)
        printf("\nData found at %d position\n", rslt + 1);
    else
        printf("\nData not found\n");
}