// Calculate Perimeter and Area of a Circle
// p=2*pi*r
// a=pi*r*r

#include<stdio.h>
#define PI 3.14
int main()
{
	float radius, perimeter, area;
	
	printf("Enter radius of the circle : \n");
	scanf("%f", &radius);
	
	perimeter = 2 * PI * radius;
	area = PI * radius * radius;
	
	printf("Perimeter of the circle : %.2f \nArea of the circle : %.2f", perimeter, area);
} 
