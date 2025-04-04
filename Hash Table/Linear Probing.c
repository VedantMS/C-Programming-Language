#include<stdio.h>
#include<stdlib.h>
#define size 10

int table[size];

void init()
{
	for(int i=0; i<size; i++)
		{
			table[i] = -1;
		}
}

int hash(int num)
{
	return num % 10;
}

void insert(int num)
{
	int n = hash(num);
	int flag = 0;
	if(table[n] == -1)
		{
			table[n] = num;
			return;
		}
	else
		{
			int i = n+1;
			while( i != n)
				{
					if(table[i] == -1)
						{
							table[i] = num;
							flag++;
							return;
						}
						
					else
						{
							i = (i + 1) % 10;
						}
				}
				
			if(flag == 0)
				printf("Bucket Full. \n");
				
			return;
		}
	
}

void display()
{
	printf("Hash\tKey \n");
	for(int i=0; i<size; i++)
		{
			printf("%d\t%d \n", i, table[i]);
		}
}

int main()
{
	int i, n, choice;
	
	init();
	
	printf("1\tInsert \n2\tDisplay \n3\tExit \n\n");
	while(1)
		{
			printf("\nEnter Choice: ");
			scanf("%d", &choice);
			
			switch(choice)
				{
					case 1:		printf("Enter Element: ");
								scanf("%d", &n);
								insert(n);
								break;
								
					case 2:		display();
								break;
								
					case 3:		exit(0);
					
					default:	printf("Enter Valid Choice. \n");
				}
		}
}
