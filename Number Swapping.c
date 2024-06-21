//Swap the values of two variables without using any extra variable

#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter two numbers : \n");
	scanf("%i %i", &a, &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("Swapped Numbers : \n%i\n%i", a, b);
}
