// Sentinel Linear Search

#include<stdio.h>
#include<stdlib.h>

int* input(int n)
{
	int i=0;
	int *ptr;
	ptr = (int*)malloc(n*sizeof(int));
	printf("Enter Elements : \n");
	
	for(i=0; i<n; i++)
		{
			scanf("%i", ptr+i);
		}
		
	return ptr;
};

void ls(int *p, int n)
{
	int a, b, c, i=0;
	ls:
	printf("Enter Number to Find : \n");
	scanf("%i", &a);
	
	c = *(p+n-1);
	*(p+n-1) = a;
	
	for(i=0; i<n; i++)
		{
			if(*(p+i) == a)
				{
					*(p+n-1) = c;
					if(*(p+i) == a)
						{
							printf("The Number exists at %ith position. \n", i);
							break;
						}
					else
						{
							printf("The Number does not exist.");
						}	
				}
		}
		
	printf("Find another number. 0/1 \n");
	scanf("%i", &b);
	if(b == 1)
		{
			goto ls;
		}
		
	free(p);
};

int main()
{
	int n;
	int *p;
	
	printf("Enter Number of Elements : \n");
	scanf("%i", &n);
	
	p=input(n);
	ls(p, n);
	
	return 0;
}

