#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 20
#define bottom -1

typedef struct stack
{
	int top;
	int data[size];
}stack;

void init(stack *s)
{
	s->top = bottom;
}

int isEmpty(stack *s)
{
	return s->top == bottom;
}

int isFull(stack *s)
{
	return s->top == size-1;
}

void push(int i, stack *s)
{
	if(isFull(s))
		printf("Stack is Full. \n");
		
	else
		{
			s->top++;
			s->data[s->top] = i;
		}
}

int pop(stack *s)
{
	int i;
	
	if(isEmpty(s))
		{
			printf("Stack isEmpty. \n");
			
			return -1;
		}
		
	else
		{
			i = s->data[s->top];
			s->top--;
			
			return i;
		}
}

void evaluate(char expression[])
{
	stack s;
	int i, a, o1, o2;
	
	init(&s);
	
	for(i=0; expression[i]!='\0'; i++)
		{
			if(isalpha(expression[i]))
				{
					printf("Enter Value for %c : ", expression[i]);
					scanf("%i", &a);
					push(a, &s);
				}
				
			else
				{
					o2 = pop(&s);
					o1 = pop(&s);
					
					switch(expression[i])
						{
							case '+': push(o1 + o2, &s);
									break;
									
							case '-': push(o1 - o2, &s);
									break;
							
							case '*': push(o1 * o2, &s);
									break;
									
							case '/': push(o1 / o2, &s);
									break;
									
							case '%': push(o1 % o2, &s);
									break;
						}
				}
		}
	
	printf("Result: %i \n", pop(&s));
}

int main()
{
	char post[20];
	
	printf("Enter Expression : \n");
	scanf("%s", post);
	
	fflush(stdin);
	
	printf("Postfix String : \n%s \n", post);
	
	evaluate(post);
	
	return 0;
}
