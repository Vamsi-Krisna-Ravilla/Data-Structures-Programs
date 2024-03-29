//Stack Implementation using Arrays in C
#include<stdio.h>
#include<stdlib.h>
# define MAX 5
int stack[MAX];
int top=-1;
void push()
{
	int value;
	if(top==MAX-1) printf("\nStack Overflow..\n");
	else
	{
		printf("\nEnter element value to insert into Stack\n");scanf("%d",&value);
		top++;
		stack[top]=value;
	}
}
void pop()
{
	if(top==-1) printf("Underflow\n");
	else
	{	
		printf("Deleted Element in stack is %d",stack[top]);
		top--;
	}
}
void display()
{
	int i;
	printf("\nElements in Stack are:\t");
	for(i=top;i>=0;i--) printf("%d\t",stack[i]);
}
void main()
{
	int choice;
	while(1)
	{
		printf("\n1.exit\n2.display\n3.push\n4.pop\n");
		printf("Enter choice:\t");scanf("%d",&choice);
		switch(choice)
		{
			case 1:exit(0);
			case 2:display();break;
			case 3: push();break;
			case 4:pop();break;
			default:printf("Invalid choice\n");
		}
	}
}
