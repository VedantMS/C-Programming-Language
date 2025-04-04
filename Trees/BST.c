#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (node *)malloc(sizeof(node))

typedef struct Node
{
	int data;
	struct Node *l;
	struct Node *r;
}node;

node* insert(node *root)
{
	node *nn = NEWNODE, *s, *t;
	int num;
	printf("Enter Number : ");
	scanf("%i", &num);
	
	nn->data = num;
	nn->l = NULL;
	nn->r = NULL;
	
	if(root == NULL)
		{
			root = nn;
		}
		
	else
		{
			t = root;
			while(t != NULL)
				{
					s = t;
					if(nn->data < s->data)
							t = t->l; 				
					else
							t = t->r;
				}
			if(nn->data < s->data)
				s->l = nn;
			else
				s->r = nn;
		}
		
	return root;
}

void preorder(node *root)
{
	if(root == NULL)
		return; 
		
	printf("%i\t", root->data);
	preorder(root->l);
	preorder(root->r);
}

node* deletenode(node* root, int key) 
{
    if (root == NULL) return NULL;  // If tree is empty or key not found.

    if (key < root->data)  // Search in the left subtree.
        root->l = deletenode(root->l, key);
        
    else if (key > root->data)  // Search in the right subtree.
        root->r = deletenode(root->r, key);
        
    else {  // Node found!
        
        // Case 1 & 2: Node with one or no child
        
        if (root->l == NULL) {
            node* temp = root->r;  // Save right child
            free(root);  // Delete node
            return temp;  // Return right child
        } 
        
        else if (root->r == NULL) {
            node* temp = root->l;  // Save left child
            free(root);  // Delete node
            return temp;  // Return left child
        }

        // Case 3: Node with two children
        node* temp = root->r;  
        while (temp->l != NULL)  // Find inorder successor (smallest in right subtree)
            temp = temp->l;
        
        root->data = temp->data;  // Copy successor's value
        root->r = deletenode(root->r, temp->data);  // Delete successor node
    }

    return root;  // Return updated root
}

int count(node *root)
{
	if(root == NULL)
		return 0; 
		
	return 1 + count(root->l) + count(root->r);
}

int countleaf(node *root)
{
	if(root == NULL)
		return 0; 
		
	if(root->l == NULL && root->r == NULL)
		return 1;
		
	return countleaf(root->l) + countleaf(root->r);
}

int issame(node *root, node*root1)
{
	if (root == NULL && root1 == NULL)
        return 1; // Both trees are empty

    if (root == NULL || root1 == NULL)
        return 0; // One tree is empty, the other is not

    // Check if the current node values are the same and recursively check left & right subtrees
    return (root->data == root1->data) &&
           issame(root->l, root1->l) &&
           issame(root->r, root1->r);
}

void createandcheck(node *root, node*root1)
{
	int n, flag = 0;
	printf("Enter Total Elements : ");
	scanf("%i", &n);
	
	while(n > 0)
		{
			root1 = insert(root1);
			n--;
		}
		
	if (issame(root, root1))
        printf("The two trees are identical.\n");
    else
        printf("The two trees are not identical.\n");
}

int main()
{
	int choice, num;
	node *root = NULL, *root1 = NULL;
	
	printf("1\tInsert \n2\tPreorder \n3\tCount \n4\tCount Leaves \n5\tDelete \n6\tCreate and Compare \n7\tExit \n\n");
	while(1)
		{
			printf("\nSelect Choice : ");
			scanf("%i", &choice);
			
			switch(choice)
				{
					case 1: root = insert(root);
							break;
				
					case 2: preorder(root);
							break;
							
					case 3: num = count(root);
							printf("%i\n", num);
							break;
									
					case 4: num = countleaf(root);
							printf("%i", num);
							break;
							
					case 5: printf("Enter Number to be Deleted : ");
							scanf("%i", &num);
							root = deletenode(root, num);
							break;
							
					case 6: createandcheck(root, root1);
							break;
							
					case 7: exit(0);
					
					default: printf("Invalid Choice. \n");
				}
		}
}
