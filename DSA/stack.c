#include <stdio.h>
#include <stdlib.h>
#define size 5

int stack[size], top = -1, data;

void push()
{
    if (top == size - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        printf("Enter the data : ");
        scanf("%d", &data);
        stack[top] = data;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("The popped data is : %d\n", stack[top--]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
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