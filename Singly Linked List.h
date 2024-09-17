#define NEWNODE (node *)malloc(sizeof(node))

typedef struct node
{
	int data;
	struct node *link;
}node;

void createlist(node *head)
{
	node *t, *nn;
	int i, n;
	
	printf("Enter Total Nodes : \n");
	scanf("%i", &n);
	
	printf("Enter Data : ");
	scanf("%i", &head->data);
	head->link = NULL;
	t = head;
	
	for(i=2; i<=n; i++)
		{
			nn = NEWNODE;
			printf("Enter Data : ");
			scanf("%i", &nn->data);
			nn->link = NULL;
			t->link = nn;
			t = t->link;
		}
}

void displaylist(node *head)
{
	node *t;
	
	t = head;
	
	printf("Data : \n");
	
	while(t != NULL)
		{
			printf("%i \n", t->data);
			t = t->link;
		}
}

void search(node *head)
{
	node *t;
	int n, i=0;
	
	t = head;
	
	printf("Enter Element to be Searched : ");
	scanf("%i", &n);
	
	while(t != NULL)
		{
			if(t->data == n)
				{
					printf("The Data is present. \n", i);
					i++;
					break;
				}
			t = t->link;
		}
	if(i == 0)
		{
			printf("The Data is not present. \n");
		}
}
