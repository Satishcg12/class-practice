// link list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *new_node;
int n, x;

// display list
void display()
{
    struct node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
// insert at end
void insert_first()
{
}

int main()
{
}