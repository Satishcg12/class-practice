// link list

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
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
        if (a == 1)
            break;
        if (a != -1)
            a--;
    };
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

void insertAtEnd()
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
    }

    printf("\nA node inserted");
    length++;
    printf("\nData: %d", currentNode->data);
    printf("\nNext: %d", currentNode->next);
    printf("\nIn: %d", currentNode);
}
void insertBeforeX()
{
    int x;
    printf("Enter your position: ");
    scanf("%d", &x);
    if (x > length || x < 1)
    {
        printf("Invalid Position");
    }
    else
    {
        if (x == 1)
            insertAtBegining();
        else
        {
            allocateMemory();
            traverse(x - 2);
            newNode->next = currentNode->next;
            currentNode->next = newNode;
            printf("\nA node inserted");
            length++;
            printf("\nData: %d", newNode->data);
            printf("\nNext: %d", newNode->next);

            printf("\nIn: %d", newNode);
        }
    }
}
void insertAfterX()
{

    int x;
    printf("Enter your position: ");
    scanf("%d", &x);
    if (x > length || x < 1)
    {
        printf("Invalid Position");
    }
    else
    {
        if (x = length)
            insertAtEnd();
        else
        {
            allocateMemory();
            traverse(x-1);
            newNode->next = currentNode->next;
            currentNode->next = newNode;
            printf("\nA node inserted");
            length++;
            printf("\nData: %d", newNode->data);
            printf("\nNext: %d", newNode->next);

            printf("\nIn: %d", newNode);
        }
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

    int choice;
    while (1)
    {
        printf("\n1. Insert node at begining");
        printf("\n2. Insert node at end");
        printf("\n3. Insert node before x positon");
        printf("\n4. Insert node after x positon");

        printf("\n5. Delete node at begining");
        printf("\n6. Delete node at end");
        printf("\n7. Delete x positon node");

        printf("\n8. Display");
        printf("\n9. End");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertAtBegining();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertBeforeX();
            break;
        case 4:
            insertAfterX();
            break;
        // case 5:
        //     deleteAtBegining();
        //     break;
        // case 6:
        //     deleteAtEnd();
        //     break;
        // case 7:
        //     deleteBeforeX();
        //     break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}