//Swap the values of two variables

#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter two numbers : \n");
	scanf("%i %i", &a, &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("Swapped Numbers : \n%i\n%i", a, b);
}
