#include <stdio.h>
#include <stdlib.h>

#define size 5

int circularQueue[size], front = -1, rear = -1, data, i;

void enqueue()
{
    if ((rear == size - 1 && front == 0) || (front == (rear + 1) % size))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        printf("Enter your data: ");
        scanf("%d", &data);
        circularQueue[rear] = data;
        printf("Data inserted\n");
    }
}

void dequeue()
{
    if (front == -1 )
    {
        printf("Queue Underflow\n");
    }
    else
    {
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
        printf("Data deleted\n" );
    }
}
void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i;
        printf("Queue is: ");
        for (i = front; i != rear; i = (i + 1) % size)
        {
            printf("%d ", circularQueue[i]);
        }
        printf("%d\n", circularQueue[rear]);
    }
}

int main()
{

    int choice;
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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