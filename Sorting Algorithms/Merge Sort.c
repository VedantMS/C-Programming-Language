// Merge Sort 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input(int a[], int n)
{
	int i=0;
	srand(time(NULL));
	for(i=0; i<n; i++)
		{
			a[i] = rand()%100;
		}
}

void display(int a[], int n)
{
	int i=0;
	for(i=0; i<n; i++)
		{
			printf("%i \t", a[i]);
		}
}

void merge(int a[], int i1, int i2, int j1, int j2)
{
	int i=i1, j, k=0;
	int t[50];
	i = i1;
	j = j1;
	
	while(i<=i2 && j<=j2)
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
	while(i<=i2)
		{
			t[k++] = a[i++];
		}
	while(j<=j2)
		{
			t[k++] = a[j++];
		}
	for(i=i1, j=0; i<=j2; i++)
		{
			a[i] = t[j++];
		}
}
void merge_sort(int a[], int start, int end)
{
	int mid;
	
	if(start < end)
		{
			mid = (start + end) / 2;
			
			merge_sort(a, start, mid);
			merge_sort(a, mid+1, end);
			merge(a, start, mid, mid+1, end);
		}
}

int main()
{
	int n;
	int *a;
	printf("Enter Total Number Of Elements : \n");
	scanf("%i", &n);
	
	a = (int *)malloc(n * sizeof(int));
	
	input(a, n);
	
	printf("Unsorted Data : \n");
	display(a, n);
	
	merge_sort(a, 0, n-1);
	
	printf("\nSorted Data : \n");
	display(a, n);
	
	return 0;
}
