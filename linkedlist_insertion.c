//this program covers the insertion operation of the linked list
// basically insertion operation has 4 cases
//1. insertion at beginning 
//2. insertion at specified index
//3. insertion at end
//4. insertion after a given node
#include<stdio.h>
#include<stdlib.h>
//creating a node datatype
struct node
{
    int data;
    struct node *link;
};
//function for inserting element at beginning
struct node* insertAtFirst(struct node* head, int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->link=head;
    ptr->data=data;
    return ptr;
}
//function for inserting element at specified index
struct node* insertAtIndex(struct node* head, int data, int index){
    struct node *ptr=(struct node*)malloc(sizeof(struct node*));
    struct node* p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->link;
        i++;
    }
    ptr->data=data;
    ptr->link=p->link;
    p->link=ptr;
    return head;
}
//function for inserting element at the end
struct node* insertAtEnd(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=head;
    while (p->link!=NULL)
    {
        p=p->link;
    }
    p->link=ptr;
    ptr->link=NULL;
    return head;
}
//function for inserting element after a given node
struct node* insertNext(struct node* prevnode, struct node *head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=head;

    ptr->link=prevnode->link;
    prevnode->link=ptr;

    return head;
}
//function for traversing and printing elements of a linked list
void traverseList(struct node *ptr){
    while (ptr!=NULL)
    {
    printf("\n Element: %d \n",ptr->data);
    ptr=ptr->link;

    }
}
void main(){
struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=8;
    head->link=second;
    second->data=9;
    second->link=third;
    third->data=10;
    third->link=fourth;
    fourth->data=19;
    fourth->link=NULL;
    traverseList(head);
    head=insertAtFirst(head,1);
    printf("\n after inserting node at beginning:");
    traverseList(head);
    printf("\n inserting element at specified index");
    head=insertAtIndex(head,12,2);
    traverseList(head);
    printf("\n inserting at end:");
    head=insertAtEnd(head,18);
    traverseList(head);
    printf("\n insertion after a given node");
    head=insertNext(second,head,20);
    traverseList(head);
}