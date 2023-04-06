// A sample c program to implement queue data structure using array
//basically queue operates on fifo (first in first out) principle
// it has 3 main operations enqueue, dequeue, traverse
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void enqueue();
void dequeue();
void traverse();
int queue[CAPACITY],front=0, rear=0,i;
void main(){
    int choice;
    while (1)
    {
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. Traverse");
        printf("\n 4. Exit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n please enter a valid option");
            break;
        }
    }
}
void enqueue(){
    int elt;
    if (CAPACITY==rear)
    {
        printf("\n Queue is full!!!!");
    }
    else
    {
        printf("\n enter element to be inserted:");
        scanf("%d",&elt);
        queue[rear]=elt;
        rear++;
    } 
}
void dequeue(){
    if (front==rear)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n %d removed from the queue!!",queue[front]);
        for(i=0;i<rear-1;i++){
            queue[i]=queue[i+1];
        }
        rear--;
    }
}
void traverse(){
    if (front==rear)
    {
        printf("\n nothing to print here");
    }
    else
    {   printf("\n queue elements are:");
        for(i=0;i<rear;i++){
            printf("\n %d",queue[i]);
        }
    }
}