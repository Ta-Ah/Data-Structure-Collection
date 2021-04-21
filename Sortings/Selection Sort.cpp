#include <bits/stdc++.h>
int main()
{
    int size, min, temp;
    printf("Enter array size ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < size - 1; i++)
    {
        min = i; // assuming that the first index carries the minimum value
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min]) //picking up the minimum element
                min = j;
        }

        if (min != i) // replaceing the value of the first index by the minimum element
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("\nSo the sorted array is below\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}