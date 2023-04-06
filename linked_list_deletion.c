//this is a program which covers deletion operation of a linked list
//basically deletion operation of linked list has 4 cases
//1. deleting starting element
//2. deleting a specified position
//3. deleting end element
//4. deleting a particular value from the list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
//function for deleting starting element of linked list
struct node* deleteFirst(struct node* head){
    struct node* ptr=head;
    head=head->link;
    free(ptr);
    return head;
}
//function for deleting element of a linked list from a specified position
struct node* deleteIndex(struct node* head,int index){
    struct node* p=head;
    int i=0;
    while (i<index-1)
    {
        p=p->link;
        i++;
    }
    struct node* q=p->link;
    p->link=q->link;
    free(q);
    return head;
}
//function for deleting last element of the linked list
struct node* deleteEnd(struct node* head){
    struct node* p=head;
    struct node* q=head->link;
    while (q->link!=NULL)
    {
        p=p->link;
        q=q->link;
    }
    p->link=NULL;
    free(q);
    return head;
}
//function for deleting element of a linked list based on the given value
struct node* deleteValue(struct node* head, int value){
    struct node *p=head;
    struct node *q=head->link;
    while (q->data!=value && q->link!=NULL)
    {
        p=p->link;
        q=q->link;
    }
    if(q->data==value){
        p->link=q->link;
        free(q);
    }
    return head;
}
//function for traversing and printing the list elements
void traversal(struct node* ptr){
    printf("\n elements are:");
    while (ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        ptr=ptr->link;
    }
    
}
void main(){
    struct node* head;
    struct node* first;
    struct node* second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;
    struct node* sixth;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    sixth=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=first;
    first->data=20;
    first->link=second;
    second->data=30;
    second->link=third;
    third->data=40;
    third->link=fourth;
    fourth->data=50;
    fourth->link=fifth;
    fifth->data=60;
    fifth->link=sixth;
    sixth->data=70;
    sixth->link=NULL;
    traversal(head);
    printf("\n list after deleting first node:");
    head=deleteFirst(head);
    traversal(head);
    printf("\n list after deleting specified element:");
    head=deleteIndex(head,3);
    traversal(head);
    printf("\n list after deleting end element:");
    head=deleteEnd(head);
    traversal(head);
    printf("\n list after deleting a particular value:");
    head=deleteValue(head,30);
    traversal(head);
}