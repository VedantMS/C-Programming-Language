#include<stdio.h>
#include<stdlib.h>
#define size 5
#define bottom -1

int stack[size];
int top;

void init()
{
	top = bottom;
}

int isEmpty()
{
	return top == bottom;
}

int isFull()
{
	return top == size-1;
}

void push(int i)
{
	if(isFull())
		printf("Stack Overflow. \n");
		
	else
		{	
			top++;
			stack[top] = i;
		}
}

int pop()
{
	int i;
	
	if(isEmpty())
		{
			printf("Stack is Empty. \n");
			return -1;
		}
		
	else
		{
			i = stack[top];
			top--;
			return i;
		}
}

int main()
{
	int i, choice;
	
	init();
	
	printf("1.\tPush \n2.\tPop \n3.\tExit \n");
	while(1)
		{
			printf("\nEnter Choice : ");
			scanf("%i", &choice);
			switch(choice)
				{
					case 1: printf("Enter Data : ");
							scanf("%i", &i);
							push(i);
							break;
							
					case 2: i = pop();
							if(i != -1)
								printf("Popped Element : %i \n \n", i);
							break;
								
					case 3: exit(0);
					
					default: printf("Enter Vaolid Choice. \n \n");
								
				}
		}
		
	return 0;
}


