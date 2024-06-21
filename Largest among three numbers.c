//Find the Largest Number among the three numbers.

#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter any three numbers : \n");
	scanf("%i %i %i", &a, &b, &c);
	
	if(a>b && a>c){
			printf("%d is the greatest number.", a);
		}
	
	else if(b>a && b>c){
			printf("%d is the greatest number.", b);
		}
		
	else if(c>a && c>b){
			printf("%d is the greatest number.", c);
		}
		
	return 0;
}
