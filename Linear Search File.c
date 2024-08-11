// Linear Search File 

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
	while((fscanf(f, "%s %d", c[i].cname, &c[i].scode)) != EOF)
	{
		
		i++;
	}
}

void linear_search(cities c[], char city[])
{
	int i=0, a;
	
	for(i=0; i<10; i++)
		{
			a = strcmp(c[i].cname, city);
			if(a == 0)
				{
					printf("City Name : %s \nSTD Code : %i \n", c[i].cname, c[i].scode);
					break;
				}
		}
	if(i == 10)
		printf("The city is not available in the file. \n");
}

int main()
{
	FILE *f;
	cities c[10];
	
	char city[10];
	int i=0;
	
	f = fopen("C:\\Users\\Vedant\\Desktop\\File Name.txt", "r");
	if(f == NULL)
		{
			printf("File Not Found. \n");
			exit(0);
		}
		
	read_file(f, c);
	
	lsf:
	printf("Enter City to be searched : \n");
	scanf("%s", city);
	linear_search(c, city);
	
	printf("Search Another City. 0/1\n");
	scanf("%i", &i);
	if(i == 1)
		goto lsf;
	
	fclose(f);
	
	return 0;
}
