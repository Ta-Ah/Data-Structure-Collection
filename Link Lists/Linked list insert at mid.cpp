#include <bits/stdc++.h>

struct Node
{
    int data;
    struct Node *link;
};
struct Node *head;
int pos, count = 0, nitCount = 0;

void printing()
{
    struct Node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void midInserting(int k)
{
    nitCount++;
    int i = 1;
    struct Node *temp2;
    temp2 = head;
    while (i < pos)
    {
        temp2 = temp2->link;
        i++;
    }
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->data = k;
    temp1->link = temp2->link;
    temp2->link = temp1;
}

void endInserting(int k)
{
    count++;
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->data = k;
    temp1->link = head;
    head = temp1;
}

int main()
{
    head = NULL;

    endInserting(5);
    endInserting(14);
    endInserting(3);
    endInserting(21);
    endInserting(7);
    endInserting(26);

    printf("The pre-build linked list is\n");
    printing();

    int val;
    printf("\nEnter position ");
    scanf("%d", &pos);
    if (pos > count)
        printf("Invalid position\n");
    else
    {
        printf("Enter value ");
        scanf("%d", &val);
        midInserting(val);
    }

    nitCount = count + nitCount;

    printing();
    printf("There are total %d nodes in the linked list\n", nitCount);
}
