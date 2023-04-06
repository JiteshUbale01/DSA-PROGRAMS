// a simple c program to implement stack using array and performing operations
// stack data structure operates on lifo(last in first out ) principle
//typically stack has 3 primary operations push(), pop(), traverse()
#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
void push(int);
void pop();
void peek();
void traverse();
int stack[CAPACITY], top = -1, i;
void main()
{
    int elt, choice;
    while (1)
    {
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Peek");
        printf("\n 4. Traverse");
        printf("\n 5. Exit");
        printf("\n Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n enter element to be pushed");
            scanf("%d", &elt);
            push(elt);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n please enter a valid input");
            break;
        }
    }
}
void push(int elt)
{
    if (top == CAPACITY - 1)
    {
        printf("\n stack is overflow");
    }
    else
    {
        top++;
        stack[top] = elt;
    }
}
void pop()
{
    if (top < 0)
    {
        printf("\n stack is underflow");
    }
    else
    {
        printf("\n %d popped out ", stack[top]);
        top--;
    }
}
void peek()
{
    if (top < 0)
    {
        printf("\n stack is underflow");
    }
    else
    {
        printf("\n %d peek a boo ", stack[top]);
        // top--;
    }
}
void traverse(){
for(i=0; i<=top; i++){
    printf("%d ",stack[i]);
}
    
}