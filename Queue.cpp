#include<stdio.h>
#include<stdlib.h>
#define size 5

int front, rear;
int queue[size];

void init()
{
	front = rear = -1;
}

int isEmpty()
{
	return front == rear;
}

int isFull()
{
	return rear == size;
}

int peek()
{
	if(!isEmpty())
		return queue[front + 1];
	else
		return -1;
}

void addQ(int n)
{
	if(!isFull())
		{
			rear++;
			queue[rear] = n;
		}
	else
		printf("Queue is Full. \n");
}

int delQ()
{
	int n;
	if(!isEmpty())
		{
			front++;
			n = queue[front];
			return n;
		}
		
	else
		{
			printf("Queue is Empty. \n");
			return -1;
		}
}

int main()
{
	int choice, n;
	
	init();
	
	printf("1.\tAdd Element \n2.\tDelete Element \n3.\tPeek \n4.\tExit \n \n");
	
	while(1)
		{
			printf("Enter Choice : ");
			scanf("%i", &choice);
			
			switch(choice)
				{
					case 1: printf("Enter Element to Add : ");
							scanf("%i", &n);
							addQ(n);
							break;
							
					case 2: n = delQ();
							if(n != -1)
								printf("Deleted Element : %i \n", n);
							break;
							
					case 3: n = peek();
							if(n != -1)
								printf("First Element : %i \n", n);
							else
								printf("Queue is Empty. \n");
							break;
							
					case 4: exit(0);
					
					default: printf("Enter Valid Choice. \n");
				}
		}
}
