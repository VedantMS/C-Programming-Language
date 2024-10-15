#include<stdio.h>
#include<stdlib.h>

void accept(int a[], int n)
{
	int i;
	printf("Enter Elements : \n");
	for(i=0; i<n; i++)
		{
			scanf("%i", &a[i]);
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

void count_sort(int a[], int n)
{
	int i, j, t;
	int *b;
	b = (int *)calloc(n, sizeof(int));
	
	for(i=0; i<n; i++)
		{
			b[a[i]] = b[a[i]] + 1;
		}
	t=0;
	for(i=0; i<n; i++)
		{
			for(j=0; j<b[i]; j++)
				{
					a[t++] = i;
				}
		}
}


int main()
{
	int n;
	int *a;
	
	printf("Enter Total Elements : \n");
	scanf("%i", &n);
	
	a = (int *)malloc(n*sizeof(int));
	
	accept(a, n);
	
	printf("Unsorted Data : \n");
	display(a, n);
	
	count_sort(a, n);
	
	printf("Sorted Data : \n");
	display(a, n);
	
	return 0;
}
