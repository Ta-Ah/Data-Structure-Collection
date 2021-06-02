#include <bits/stdc++.h>
#include <windows.h>

using namespace std;
int bucket[5], top = -1;

void pushing()
{
    int x;
    printf("Enter data ");
    scanf("%d", &x);
    if (top == 5 - 1)
    {
        printf("Overflow Condition\n");
        exit(0);
    }
    else
        bucket[++top] = x;
}

void popping()
{
    int x;
    if (top == -1)
    {
        printf("Underflow Condition\n");
        exit(0);
    }
    else
    {
        x = bucket[top];
        top--;
        printf("%d has been popped\n", x);
    }
}

void peeking()
{
    if (top == -1)
        printf("Bucket is empty\n");
    else
        printf("%d was entered at the last\n", bucket[top]);
}

void displaying()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d ", bucket[i]);
    }
}

void loading()
{
    printf("\t\t\t\t\tStack Initializing ");
    char x = 219;
    for (int i = 0; i < 35; i++)
    {
        cout << x;
        if (i < 10)
            Sleep(100);
        if (i >= 10 && i <= 20)
            Sleep(50);
        if (i >= 10)
            Sleep(100);
    }
    system("cls");
    printf("\t\t\t\t\tStack has been initialized\n\n");
    printf("\nWARNING!!! Stack will only run between underflow and overflow condition\n");
}

int main()
{
    loading();

    int choice;
    do
    {
        printf("\nEnter a choice: 1. push 2.pop 3.peek 4. display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            pushing();
            break;
        case 2:
            popping();
            break;
        case 3:
            peeking();
            break;
        case 4:
            displaying();
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 0);
}