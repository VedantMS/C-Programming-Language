// Replace all 0’s with 1’s in a Number.

#include<stdio.h>
int main()
{
	int a, i, x, n=0, y=1;

	printf("Enter a Number : \n");
	scanf("%i", &a);
	
	i = a;
	
	while(a>0)
		{
			x = a % 10;
			
			if(x==0){
					x=1;
				}
			else if(x==1){
					x=0;
				}
				
			n = x*y + n;
			
			a /= 10;
			y *= 10;
		}
		
	printf("Number : \n%i", n);
	
	return 0;
}
