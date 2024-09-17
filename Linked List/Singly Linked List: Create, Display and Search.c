// Singly Linked List: Create, Display and Search.c 

#include<stdio.h>
#include<stdlib.h>
#include "C:\\Users\\Vedant\\Desktop\\Singly Linked List.h"

int main()
{
	node *head;
	int i;
	
	head = NEWNODE;
	
	printf("Singly Linked List Functions : \n");
	printf("1\tCreate List \n");
	printf("2\tDisplay List \n");
	printf("3\tSearch Data \n");
	printf("4\tExit \n \n");
	
	while(1)
		{
			printf("Enter Choice : ");
			scanf("%i", &i);
			
			switch(i)
				{
					case 1: createlist(head);
							break;
							
					case 2: displaylist(head);
							break;
							
					case 3: search(head);
							break;
							
					case 4: exit(0);
					
					default: printf("Invalid Choice. \n");
				}
		}
		
}
