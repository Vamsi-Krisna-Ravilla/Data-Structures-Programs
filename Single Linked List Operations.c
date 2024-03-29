#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void display()
{
    struct node *temp=head;
    if(head==NULL) printf("No nodes in Linked List");
    else
    {
        printf("Elements in LL are: ");
        while(temp!=NULL)
        {
            printf("%d\t", temp->data);temp=temp->next;
            
        }
    }
}
void insertEnd()
{
    struct node *temp=head;int value;
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    printf("Enter elem value: ");scanf("%d",&value);
    newNode->data=value;newNode->next=NULL;
    if(head==NULL)
        head=newNode;
    else
    {
        while(temp->next !=NULL) temp=temp->next;
        temp->next=newNode;
    }
    printf("Inserted element %d at end of LL",value);
}
void insertBegin()
{
    int value;
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    printf("Enter elem value: ");scanf("%d",&value);
    newNode->data=value;
    if(head==NULL)
        head=newNode;
    else
    {
        newNode->next=head;
        head=newNode;
    }
    printf("Inserted element %d at begin of LL",value);
}
void deleteEnd()
{
    struct node *temp=head;
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else if(temp->next==NULL)
    {
        printf("Element : %d got deleted",head->data);
        head=NULL;
    }
    else
    {
        while(temp->next->next!=NULL) 
        {
            temp=temp->next;
        }
        printf("Element : %d got deleted",temp->next->data);
        temp->next=NULL;
    }
}
void deleteBegin()
{
    struct node *temp=head;
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else if(head->next==NULL)
    {
        printf("Element : %d got deleted",head->data);
        head=NULL;
    }
    else
    {
        printf("Element : %d got deleted",head->data);
        head=head->next;
        temp=NULL;
    }
}
void insertAtPosition()
{
    int pos,value,i;
    struct node *temp=head;
    printf("Enter position to insert node:\n");
    scanf("%d",&pos);
    
    if(pos <= 0 ) printf("Enter correct position for Insertion");
    else
    {
        struct node *newNode = (struct node *) malloc(sizeof(struct node));
    	printf("Enter elem value: ");scanf("%d",&value);
    	newNode->data=value;
        for(i=1;i<pos-1;i++) {temp=temp->next;}
        newNode->next=temp->next; 
        temp->next=newNode;
        printf("Inserted element %d at position %d of LL",value,pos);
    }
}
void deleteAtPosition()
{
    int pos,i;
    struct node *temp=head;
    printf("Enter position to delete node:\n");
    scanf("%d",&pos);
    if(pos <= 0 ) printf("Deletion not possible");
    else
    {
        for(i=1;i<pos-1;i++) temp=temp->next;
        struct node *del=temp->next;
        temp->next=del->next;
        printf("Element : %d got deleted at position %d",del->data,pos);
        free(del);
    }
}
void main() {
    int choice;
    while(1)
    {
        printf("\n 1.Exit\n2.Display\n3.InsertEnd\n4.InserBegin\n5.DeleteEnd\n6.DeleteBegin\n7.InsertAtPosition\n8.DeleteAtPosition");
    
        printf("\nEnter Choice\n");scanf("%d",&choice);
        switch(choice)
        {
            case 1:exit(0);
            case 2: display();break;
            case 3: insertEnd();break;
            case 4:insertBegin();break;
            case 5: deleteEnd();break;
            case 6: deleteBegin();break;
            case 7:insertAtPosition();break;
            case 8:deleteAtPosition();break;
        }
    }
}
