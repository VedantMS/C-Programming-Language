// Decimal to Binary Converter

#include<stdio.h>
int main()
{
	int i, a, x, n=0, j=1;
	
	printf("Enter Number Number : \n");
	scanf("%i", &a);
	
	i = a;
	
	while(i>0)
		{
			x = i % 2;
			
			n = n + x * j;
			
			i /= 10;
			j *= 10;
		}
	
	printf("Binary Number : \n%i", n);
	
	return 0;
}
