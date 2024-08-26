// Selection Sort File 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 8
typedef struct
{
	char ename[8];
	int eage;
}emp;

void read_file(FILE *f, emp e[])
{
	int i=0;

	while((fscanf(f, "%s %d", e[i].ename, &e[i].eage)) != EOF)
		{
			i += 1;
		}
}

void display(emp e[])
{
	int i; 
	
	for(i=0; i<8; i++)
		{
			printf("%s\t%d \n", e[i].ename, e[i].eage);
		}
}
void selection_sort(emp e[])
{
	int i, j, a; 
	char b[10]; 
	
	for(i=0; i<n-1; i++)
		{
			for(j=i+1; j<n; j++)
				{
					if((strcmp(e[i].ename, e[j].ename)) > 0)
						{
							// Age 
							a = e[i].eage;
							e[i].eage = e[j].eage;
							e[j].eage = a; 
							
							// Name 
							strcpy(b, e[i].ename);
							strcpy(e[i].ename, e[j].ename);
							strcpy(e[j].ename, b);
						}
				}
		}
}

int main()
{
	FILE *f;
	emp e[8];
		
	f = fopen("Employee.txt", "r+");
	if(f == NULL)
		{
			printf("File Not Found. \n");
			exit(0);
		}
	
	read_file(f, e);
	
	printf("Unsorted : \n\n");
	display(e);
	
	selection_sort(e);
	
	printf("\nSorted : \n\n");
	display(e);
	
	fclose(f); 
	
	return 0;
}
