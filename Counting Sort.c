// Counting Sort 

#include<stdio.h>
#include<stdlib.h>

void accept(int a[], int n)
{
	int i=0;
	
	printf("Enter Elements : \n");
	for(i=0; i<n; i++)
		{
			scanf("%i", &a[i]);
		}
}

void display(int a[], int n)
{
	int i=0;
	
	for(i=0; i<n; i++)
		{
			printf("%i \n", a[i]);
		}
}

void counting_sort(int a[], int n)
{
	int i, j, t;
	
	for(i=1; i<=n-1; i++)
		{
			j = i;
			while(j>0 && a[j-1]>a[j])
				{
					t = a[j];
					a[j] = a[j-1];
					a[j-1] = t;
					j--;
				}
		}
}	
	
int main()
{
	int i, n;
	int *a;
	
	printf("Total number of elements : \n");
	scanf("%i", &n);
	
	a = (int *)malloc(n * sizeof(int));
	
	accept(a, n);
	
	printf("Unsorted data : \n");
	display(a, n);
	
	counting_sort(a, n);
	
	printf("Sorted data : \n");
	display(a, n);	
	
	return 0;	
}


