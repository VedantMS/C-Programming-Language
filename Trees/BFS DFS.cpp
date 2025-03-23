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


int main()
{
	int choice;
	node *root = NULL;
	
	printf("1\tInsert \n\t2BFS \n3\tDFS \n4\tExit \n\n");
	while(1)
		{
			printf("\nSelect Choice : ");
			scanf("%i", &choice);
			
			switch(choice)
				{
					case 1: root = insert(root);
							break;
							
					case 2: root = BFS(root);
							break;
				
					case 3: root = DFS(root);
							break;
							
					case 4: exit(0);
				}
		}
}
