#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *firstNode = NULL, *newNode, *currentNode;


int length = 0;

int takeInput()
{
    int data;
    printf("Enter your data: ");
    scanf("%d", &data);
    return data;
}

void allocateMemory()
{
    int data = takeInput();
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
}

int traverse(int a)
{
    currentNode = firstNode;
    
    while (currentNode->next != NULL){
        currentNode = currentNode->next;
        if (a <= 1)
            break;
        if (a != -1)
            a--;
    }
    return 0;
}
void insertAtBegining()
{
    allocateMemory();

    if (firstNode == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = firstNode;
    }
    firstNode = newNode;
    length++;
    printf("\nA node inserted");
    printf("\nData: %d", newNode->data);
    printf("\nNext: %d", newNode->next);
    printf("\nIn: %d", newNode);
}

void push()
{
    if (firstNode == NULL)
    {
        insertAtBegining();
    }
    else
    {
        allocateMemory();
        traverse(-1);
        newNode->next = NULL;
        currentNode->next = newNode;

        printf("\nA node inserted");
        length++;
        printf("\nData: %d", currentNode->data);
        printf("\nNext: %d", currentNode->next);
        printf("\nIn: %d", currentNode);
    }
}
void pop()
{
    if (firstNode == NULL){
        printf("stack is empty\n");
    }
    else{
        traverse(length-1);
        currentNode->next = NULL;
        traverse(-1);
        length--;
        free(currentNode);
        
    }
}

void display()
{
    struct node *data1 = firstNode;
    if (data1 == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        do
        {
            printf("%d, ", data1->data);
            data1 = data1->next;
        } while (data1);
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}