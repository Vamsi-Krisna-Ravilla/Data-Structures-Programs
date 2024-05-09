//Binary Search Tree Insertion and Traversal-Preorder,Inorder,postorder
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* insertNode(struct node *root,int value)
{
	
    if (root == NULL)
    {
        struct node *newNode = malloc(sizeof(struct node));
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        printf("Inserted element into BST is: %d\n", newNode->data);
        return newNode;  // Return root node after insertion
    }

    if (root->data < value)
        root->right = insertNode(root->right,value);
    else if (root->data > value)
        root->left = insertNode(root->left,value);
    else
        printf("Duplicate value ignored.\n");
}

void inorder(struct node *root)   //Traverse Left-Root-Right
{  
    if(root == NULL)  
        return;  
    inorder(root->left);  

    printf("%d ",root->data);  

    inorder(root->right);  
}  
void preorder(struct node *root)   // Traverse Root-Left-Right
{  
    if(root == NULL)  
        return;  
    printf("%d ",root->data);  
    preorder(root->left);  
    preorder(root->right);  
}  

void postorder(struct node *root)   // Traverse Left-Right-Root
{  
    if(root == NULL)  
        return;  
    postorder(root->left);  
    postorder(root->right);  
    printf("%d ",root->data);  
}  
void main()
{
	int choice,value;;
	struct node *root = NULL;  
	while(1)
	{
		printf("\n1.Exit\n2.To insert a new node in the Binary Tree\n3.To display the nodes of the Binary Tree(via Inorder Traversal)\n4.To display the nodes of the Binary Tree(via Preorder Traversal)\n5.To display the nodes of the Binary Tree(via Postorder Traversal)\n");
        printf("Enter choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            exit(0);
        case 2:
            printf("\nEnter the value to be inserted: ");
            scanf("%d", &value);
            root = insertNode(root, value);
            break;
        case 3:
            printf("Inorder Traversal: ");
            inorder(root);
            printf("\n");
            break;
        case 4:
            printf("Preorder Traversal: ");
            preorder(root);
            printf("\n");
            break;
        case 5:
            printf("Postorder Traversal: ");
            postorder(root);
            printf("\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
		}
	}
}
