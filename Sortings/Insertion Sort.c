#include <stdio.h>

void sorting(int brr[], int size)
{
    for (int i = 0; i < size; i++) // forward
    {
        int temp = brr[i];
        int k = i - 1;
        while (k >= 0 && temp< brr[k])  // backward & current value is less
        {
            brr[k + 1] = brr[k];  //right shifting the value
            k--;
        }
        brr[k + 1] = temp;  // upper loop condition is broken (current value is greater) so right shifting the current value
    }
}

int main()
{
    int size;
    printf("Enter array size ");
    scanf("%d", &size);

    int brr[size];
    printf("Enter elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &brr[i]);
    }

    printf("\nBefore sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", brr[i]);
    }

    sorting(brr, size);

    printf("\nAfter sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", brr[i]);
    }
    printf("\n");
}

/* Time Complexity
---------------------------------------
==> wrost case: Descending order O(n^2)
==> best case: Ascending order O(n)
---------------------------------------
*/
