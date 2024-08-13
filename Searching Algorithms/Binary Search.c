// Binary Search 

#include<stdio.h>
#include<stdlib.h>

void insert(int a[], int n)
{
	int i;
	
	printf("Enter Elements : \n");
	for(i=0; i<n; i++)
		{
			scanf("%i", &a[i]);
		}
}

void binary_search(int a[], int n)
{
	int i, b, low, mid, high;
	
	printf("Enter Number to be Searched : \n");
	scanf("%i", &b);
	
	i = 0;
	low = 0;
	high = n - 1;
	
	while(low <= high)
		{
			mid = (low + high) / 2;
			if(b == a[mid])
				{
					printf("The Number exists at %ith position. \n", mid);
					i++;
					break;
				}
			else if(b < a[mid])
				high = mid - 1;
			else
				low = mid + 1 ;
		}
	if(i == 0)
		printf("The given number is not found. \n");
}



int main()
{
	int n, i;
	int *a;
	
	printf("Enter Total Number of Elements : \n");
	scanf("%i", &n);
	a = (int *)malloc(n * sizeof(int));
	
	insert(a, n);
	
	bn:
	binary_search(a, n);
	
	printf("Search Another Number. 0/1 \n");
	scanf("%i", &i);
	
	if(i == 1)
		goto bn;
	
	free(a);
	
	return 0;
	
}
