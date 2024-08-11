// Sentinel Search File 

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
	while((fscanf(f, "%s %i", c[i].cname, &c[i].scode) != EOF))
		{
			i++;
		}
}

void sentinel_search(cities c[], char city[])
{
	int i=0;
	char b[10];
	strcpy(b, c[9].cname);
	strcpy(c[9].cname, city);
	for(i=0; i<10; i++)
		{
			if((strcmp(city, c[i].cname)) == 0)
				{
					strcpy(c[9].cname, b);
					if((strcmp(city, c[i].cname)) == 0)
						{
							printf("City : %s \nSTD Code : %i \n", c[i].cname, c[i].scode);
							break;
						}
					else
						printf("The city is not available in the file. \n");
				}
		}
}


int main()
{
	FILE *f;
	char city[10];
	
	cities c[10];
	int i=0;
	
	f = fopen("C:\\Users\\Vedant\\Desktop\\File Name.txt", "r");
	
	if(f == NULL)
		{
			printf("File Not Found. \n");
			exit(0);
		}
	
	read_file(f, c);
	
	ssf:
	printf("Enter the Name of city to be found : \n");
	scanf("%s", city);
	sentinel_search(c, city);
	
	printf("Search Another City. 0/1");
	scanf("%i", &i);
	if(i == 1)
		goto ssf;
	
	fclose(f);
		
	return 0;
}
