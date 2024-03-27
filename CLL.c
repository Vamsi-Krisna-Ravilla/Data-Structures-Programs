//Do the necessary correction in below Circular Linked list COde.
#include<stdio.h>
#include<stdlib.h>
struct cnode
{
	int data;
	struct cnode *next;
};
struct cnode *head=NULL;
void insertEnd()
{
	int value;
	struct cnode *newNode=(struct cnode *) malloc(sizeof(struct cnode));
	printf("Enter element value of node");
	scanf("%d",&value);
	newNode->data=value;
	if(head==NULL) head=newNode;
	else
	{
		struct cnode *temp=head;
		while(temp!=NULL) temp=temp->next;
		temp->next=newNode;newNode->next=head;
	}
}
void display()
{
	struct cnode *temp=head;
	if(head==NULL) printf("No nodes in CLL\n");
	else{
	
		printf("Elements in CLL are:\n");
		do
		{
			printf("%d",temp->data);temp=temp->next;
		} while(temp!=head);
	}
}
void main()
{
	int choice;
	
	while(1)
	{
		printf("1.Exit,\n2.Display,\n3.InserEnd\n");
		printf("Enter Choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:exit(0);
			case 2: display;break;
			case 3:insertEnd();break;
		}
	}
}












