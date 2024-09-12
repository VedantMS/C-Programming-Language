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

void display(int a[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
		{
			printf("%i \n", a[i]);
		}
}

void insertion_sort(int a[], int n)
{
	int i, j, t;
	
	for(i=1; i<n; i++)
		{
			for(j=i; j>0; j--)
				{
					t = a[j];
					
					if(t < a[j-1])
						{
							a[j] = a[j -1];
						}
						
					else
						{
							break;
						}

					a[j - 1] = t;
				}
		}
}

int main()
{
	int n;
	int *a;
	
	printf("Enter Total Elements : \n");
	scanf("%i", &n);
	
	a = (int *)calloc(n, sizeof(int));
	
	accept(a, n);
	
	insertion_sort(a, n);
	
	printf("Sorted Data : \n");
	display(a, n);
	
	free(a);
	
	return 0;
	
}
