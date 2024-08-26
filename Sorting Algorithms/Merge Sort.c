// Merge Sort 

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

void merge(int a[], int i1, int j1, int i2, int j2)
{
	int t[50];
	int i, j, k;
	
	i = i1;
	j = i2;
	k = 0;
	
	while(i<=j1 && j<=j2)
		{
			if(a[i] < a[j])
				{
					t[k++] = a[i++];
				}
			else
				{
					t[k++] = a[j++];
				}
		}
	
	while(i <= j1)
		{
			t[k++] = a[i++];
		}
		
	while(j <= j2)
		{
			t[k++] = a[j++];
		}
	
	for(i=i1, j=0; i<=j2; i++, j++)
		{
			a[i] = t[j];
		}
}

void merge_sort(int a[], int i, int j)
{
	int mid;
	
	if(i < j)
		{
			mid = (i + j) / 2;
			
			merge_sort(a, i, mid);
			merge_sort(a, mid+1, j);
			merge(a, i, mid, mid+1, j);
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
	
	merge_sort(a, 0, n-1);
	
	printf("Sorted data : \n");
	display(a, n);	
	
	return 0;	
}


