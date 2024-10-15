#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (node *)malloc(sizeof(node))

typedef struct node
{
	int data;
	struct node *p;
	struct node *n;
}node;

node* create(node *h)
{
	node *t, *nn;
	int i, n;
	
	printf("Enter Total Nodes : \n");
	scanf("%i", &n);
	if(n == 0)
		{
			exit(0);
		}
		
	printf("Enter Data : ");
	scanf("%i", &h->data);
	t = h;
	
	for(i=1; i<n; i++)
		{
			nn = NEWNODE;
			printf("Enter Data : ");
			scanf("%i", &nn->data);
			t->n = nn;
			nn->p = t;
			nn->n = NULL;
			t = t->n;
		}
		
	return h;
}

void sort(node *h)
{
	node *t, *t1;
	t1 = h;
	t = h;
	int i, j, temp;
	
	while(t->n != NULL)
		{
			t = t->n;
		}
		
	for( ; t!=h; t=t->p)
		{
			for(t1=h; t1!=t; t1=t1->n)
				{
					if((t1->data) > (t1->n->data))
						{
							temp = t1->data;
							t1->data = t1->n->data;
							t1->n->data = temp;
						}
				}
		}
}

void display(node *h)
{
	node *t;
	t = h;
	
	while(t != NULL)
		{
			printf("%i \n", t->data);
			t = t->n;
		}
}

int main()
{
	node *h;
	h = NEWNODE;
	h->p = NULL;
	h->n = NULL;
	
	h = create(h);
	
	printf("Unsorted Data : \n");
	display(h);
	
	sort(h);
	
	printf("Sorted Data : \n");
	display(h);
	
	return 0; 
}
