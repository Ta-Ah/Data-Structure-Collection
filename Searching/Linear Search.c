#include <stdio.h>
int main()
{
    int n, k, i, pos = -1;
    printf("Enter array size ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the data you are looking for ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (k == arr[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
        printf("\nData not found\n");
    else
        printf("\nData found at %d position", pos);
}