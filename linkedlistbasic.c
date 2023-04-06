//this program covers about how we can implement a linked list and how the traversal of list elements can be done
//first step is we need to define the node, that is what kind of data it contains for that we need to create a node datatype using structures
//starting element of a linked list is called head
// node contains two elements one is data and other is pointer to next node
//whenever the pointer to next node value is NULL it is considered as end of the list
#include<stdio.h>
#include<stdlib.h>
//creation of a node datatype
struct node
{
    int data;
    struct node *link;
};
//function for traversing and printing elements of the linked list
void traverseList(struct node *ptr){
    while (ptr!=NULL)
    {
    printf("Element: %d \n",ptr->data);
    ptr=ptr->link;

    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    //adding data in head node and linking head node with second node
    head->data=8;
    head->link=second;
    //adding data in second node and linking it with third node
    second->data=9;
    second->link=third;
    //adding data in third node and assigning link as null that is list termination 
    third->data=10;
    third->link=fourth;
    //adding new node into list
    fourth->data=69;
    fourth->link=NULL;
    traverseList(head);
    return 0;
}
