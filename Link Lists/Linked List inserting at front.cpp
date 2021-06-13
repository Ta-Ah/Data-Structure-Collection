#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};
struct Node *head;

void printing()
{
    struct Node *temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void inserting(int k)
{
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->data = k;
    temp1->link = head;
    head = temp1;
}

int main ()
{
    head = NULL;

    int n, k;
    printf("Enter number of nodes ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("Enter the number ");
        scanf("%d", &k);
        inserting(k);
        printing();
    }
}
