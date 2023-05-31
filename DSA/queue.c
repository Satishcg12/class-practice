#include <stdio.h>
#include <stdlib.h>

#define size 5

int queue[size], front = -1, rear = -1;

void enqueue()
{
    if (rear == size - 1) printf("Queue is full\n");
    else
    {
        if (front ==-1)
        {
            front = 0;
            rear = 0;
        }else{
            rear = rear + 1;
        }
        
        printf("Enter the element to be inserted\n");
        scanf("%d", &queue[rear]);
    }
}
void dequeue()
{
    if (front == -1) printf("Queue is empty\n");
    else printf("The element is : %d\n", queue[front++]);
}
void display()
{
    if (front == -1 && rear == -1)printf("Queue is empty\n");
    else
    {
        int i;
        printf("The elements of the queue are : ");
        for (i = front; i <= rear; i++) printf("%d ", queue[i]);
        printf("\n");
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