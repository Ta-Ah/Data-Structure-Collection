#include<stdio.h>

int partitioning(int arr[], int lb, int ub)
{
    int key = arr[lb], temp1, temp2;
    int start = lb;
    int end = ub;

    while(start<end)
    {
        while(arr[start] <= key)
            start++;
        while(arr[end] > key)
            end--;
        if(start < end)
        {
            temp1 = arr[start];
            arr[start] = arr[end];
            arr[end] = temp1;
        }
    }
    temp2 = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp2;

    return end;
}

int quickSort(int arr[], int lb, int ub)
{
    int pos;
    if(lb<ub)
    {
        pos = partitioning(arr, lb, ub);

        quickSort(arr, lb, pos-1);
        quickSort(arr, pos+1, ub);
    }
    else
        return;
}

int main()
{
    int size, i, ub, lb;
    printf("Enter array size ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements\n");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    lb = 0,ub = size-1;
    quickSort(arr, lb, ub);

    printf("\nThe sorted array is below\n");
    for(i=lb; i<=ub; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Time Complexity
---------------------------------------

==> wrost case O(n^2)
==> best case (n log n)
---------------------------------------
*/
