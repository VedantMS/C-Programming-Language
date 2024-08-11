// Binary Search File 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char cname[10];
	int scode;
}cities;

void read_file(FILE *f, cities c[])
{
	int i=0;
	while((fscanf(f, "%s %i", c[i].cname, &c[i].scode)) != EOF)
		{
			i++;
		}
}

void binary_search(cities c[], int cstd)
{
	int i, low, mid, high;
	i = 0;
	low = 0;
	high = 9;

	while(low <= high)
		{
			mid = (low + high) / 2;
			
			if(cstd == c[mid].scode)
				{
					printf("City : %s \nSTD Code : %i \n", c[mid].cname, c[mid].scode);
					i++;
					break;
				}
			else if(cstd < c[mid].scode)
				high = mid - 1;
			else
				low = mid + 1;
		}
	
	if(i == 0)
		printf("The city is not available in the file. \n");
}

int main()
{
	FILE *f;
	cities c[10];
	int i=0, cstd;
	
	f = fopen("File Name.txt", "r");
	if(f == NULL)
		{
			printf("File Not Found. \n");
			exit(0);
		}
	
	read_file(f, c);
	
	bsf:
	printf("Enter City STD code to be found : \n");
	scanf("%i", &cstd);
		
	binary_search(c, cstd);
	
	printf("Search another city. 0/1 \n");
	scanf("%i", &i);
	if(i == 1)
		goto bsf;	
	
	return 0;
}
