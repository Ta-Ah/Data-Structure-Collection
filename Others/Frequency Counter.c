#include <stdio.h>
int main()
{
    int a[15], b[15], i, j, size, counter = 0;
    printf("Enter array size ");
    scanf("%d", &size);
    printf("Enter elements in array\n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < size; i++)
    {
        counter = 1;
        if (a[i] != -1)
        {
            for (j = i + 1; j < size; j++)
            {
                if (a[i] == a[j])
                {
                    counter++;
                    a[j] = -1;
                }
            }
            b[i] = counter;
        }
    }

    for (i = 0; i < size; i++)
    {
        if (a[i] != -1)
            printf("Number of %d is %d\n", a[i], b[i]);
    }
}
