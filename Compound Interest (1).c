//Calculate the Compound Interest
//A=P*(1+r/100)^t
//CI=A-P

#include<stdio.h>
#include<math.h>
int main()
{
	float a, r, p, ci;
	int i, t;
	
	printf("Enter Principal Balance : \n");
	scanf("%f", &p);
	printf("Enter Annual Rate of Interest : \n");
	scanf("%f", &r);
	printf("Enter Time Period : \n");
	scanf("%i", &t);
	
	a = p * (pow((1 + r/100), t));

	ci = a - p;
	
	printf("Compound Interest : %.2f", ci);
	
	return 0;
}
