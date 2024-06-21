#include<stdio.h>
int main()
{
	int a, b, i, j;
	
	printf("Enter Rows : \n");
	scanf("%d", &a);
	printf("Enter Columns : \n");
	scanf("%d", &b);
	
	int x[a][b];
	
	printf("Enter Matrix : \n");
	
	for(i=0; i<a; i++)
		{
			for(j=0; j<b; j++)
				{
					scanf("%d", &x[i][j]);
				}
		}
		
	printf("Transpose : \n");
	
	for(i=0; i<b; i++)
		{
			for(j=0; j<a; j++)
				{
					printf("%d\t", x[j][i]);
				}
			printf("\n");
		}
		
	return 0;

}
