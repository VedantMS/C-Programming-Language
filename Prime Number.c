//Check whether a number is Prime or not.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, a=0;
	
	printf("Enter a number : \n");
	scanf("%i", &i);
	
	if(i==0 || i==1){
			printf("%i is not a prime number.", i);
			exit(0);
		}
		
	else if(i==2){
			printf("%i is a prime number.", i);
			exit(0);
		}

	for(n=2; n<i; n++)
		{
			if(i%n == 0)
			a++;
		}
		
	if(a==0)
		printf("%i is a prime number.", i);
	else
		printf("%i is not a prime number.", i);
		
	return 0;

}
