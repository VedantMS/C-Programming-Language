// Selection Sort 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void accept(int n, int a[])
{
	int i; 
	
	srand(time(NULL)); 
	
	for(i=0; i<n; i++)
		{
			a[i] = rand()%100;
		}
}

void display(int n, int a[])
{
	int i;
	
	for(i=0; i<n; i++)
		{
			printf("%i \n", a[i]);
		}
}

void selection_sort(int n, int a[])
{
	int i, j, c; 
	
	for(i=0; i<n-1; i++)
		{
			for(j=i+1; j<n; j++)
				{
					if(a[i] > a[j])
						{
							c = a[i];
							a[i] = a[j];
							a[j] = c;
						}
				}
		}
}
			
int main()
{
	int n;
	int *a;
	
	printf("Enter Total Number Of Elements : \n");
	scanf("%i", &n);
	
	a = (int *)malloc(n * sizeof(int));
	
	accept(n, a);
	display(n, a); 
	
	selection_sort(n, a);
	
	printf("Sorted array : \n");
	display(n, a);
	
	free(a);
	
	return 0;
}
