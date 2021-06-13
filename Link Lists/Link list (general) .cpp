#include <bits/stdc++.h>

struct Node
{
    int data;
    struct Node *link;
};
struct Node *head = NULL;

void printing()
{
    struct Node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link; //traversing
    }
}

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node)); //createing 1st node
    head->data = 7;
    head->link = (struct Node *)malloc(sizeof(struct Node)); //linking and createing 2nd node
    head->link->data = 13;
    head->link->link = (struct Node *)malloc(sizeof(struct Node)); //linking and createing 3nd node
    head->link->link->data = 18;
    head->link->link->link = NULL; //ending 3rd node

    printing();
}