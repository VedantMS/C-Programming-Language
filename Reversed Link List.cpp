#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (node *)malloc(sizeof(node))
typedef struct node
{
	int data;
	struct node *link;
}node;

node * create(node *h)
{
	node *t, *nn;
	int i, n;
	
	printf("Enter Total Nodes : \n");
	scanf("%i", &n);
	
	printf("Enter Data : ");
	scanf("%i", &h->data);
	h->link = NULL;
	t = h;
	
	for(i=1; i<n; i++)
		{
			nn = NEWNODE;
			printf("Enter Data : ");
			scanf("%i", &nn->data);
			
			t->link = nn;
			t = t->link;
			nn->link = NULL;
		}
		
	return h;
}

void display(node *h)
{
	node *t;
	
	t = h;
	
	while(t != NULL)
		{
			printf("%i \n", t->data);
			
			t = t->link;
		}
}

node * reverse(node *h)
{
	node *p, *t, *n;
	t = h;
	p = NULL;
	
	while(t != NULL)
		{
			n = t->link;
			t->link = p;
			p = t;
			t = n;
		}
		
	h = p;
	
	return h;
}

int main()
{
	node *h;
	
	h = NEWNODE;
	
	h = create(h);
	
	printf("Data : \n");
	display(h);
	
	h = reverse(h);
	
	printf("Reverse Data : \n");
	display(h);
	
	return 0;
}
