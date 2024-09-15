// Bubble Sort 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input(int a[], int n)
{
	int i; 
	
	srand(time(NULL)); 
	
	for(int i=0; i<n; i++)
		{
			a[i] = rand()%100;
		}
}

void bubble_sort(int a[], int n)
{
	int temp, flag; 
	
	while(1)
	{
		flag = 0;
		for(int i=0; i<n-1; i++)
			{
				if(a[i] > a[i+1])
					{
						temp = a[i];
						a[i] = a[i+1];
						a[i+1] = temp;
						flag++;
					}
			}
		
		if(flag == 0)
			{
				break;
			}
	}
}

void display(int a[], int n)
{
	int i; 
	
	for(i=0; i<n; i++)
		{
			printf("%d\t", a[i]);
		}
}

int main()
{
	int n, *a; 
	
	printf("Enter Number of Elements : \n");
	scanf("%d", &n);
	
	a = (int *)malloc(n * sizeof(int));
	
	input(a, n);
	
	printf("Unsorted Array : \n");
	display(a,n);
	
	bubble_sort(a, n); 
	
	printf("\nSorted Array : \n");
	display(a, n);
	
	return 0;
}
