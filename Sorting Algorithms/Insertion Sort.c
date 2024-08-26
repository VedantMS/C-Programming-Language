// Insertion Sort 

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

void insertion_sort(int n, int a[])
{
	int i, j, t; 
	
	for(i=1; i<=n; i++)
		{
			t = a[i];
			for(j=i-1; j>=0; j--)
				{
					if(a[j] > t)
						{
							a[j+1] = a[j];
						}
					else
						{
							break;
						}
					
					a[j+1] = t;
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
	
	insertion_sort(n, a);
	
	printf("Sorted array : \n");
	display(n, a);
	
	free(a);
	
	return 0;
}
