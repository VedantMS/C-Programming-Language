// Binary to Decimal Converter

#include<stdio.h>
#include<math.h>
int main()
{
	int i, a, x, n=0, j=0;
	
	printf("Enter Binary Number : \n");
	scanf("%i", &a);
	
	i = a;
	
	while(i>0)
		{
			x = i % 10;
			
			n = n + x * pow((2), j);
			
			i /= 10;
			j++;
		}
	
	printf("Decimal Number : \n%i", n);
	
	return 0;
}
