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

int display(int a[], int n)
{
	int i=0;
	
	for(i=0; i<n; i++)
		{
			printf("%i \n", a[i]);
		}
}

int partition(int a[], int l, int u)
{
    int p = a[l], i = l + 1, j = u, t;

    while(i <= j)
    {
        if(a[i] < p) i++;
        else if(a[j] > p) j--;
        else
        {
            t = a[i];
            a[i++] = a[j];
            a[j--] = t;
        }
    }

    a[l] = a[j];
    a[j] = p;

    return j;
}

void quick_sort(int a[], int l, int u)
{
	int j;
	
	if(l < u)
		{
			j = partition(a, l, u);
			
			quick_sort(a, l, j-1);
			quick_sort(a, j+1, u);
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
	
	quick_sort(a, 0, n-1);
	
	printf("Sorted data : \n");
	display(a, n);	
	
	return 0;	
}
