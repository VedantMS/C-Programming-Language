// Matrix Multiplication

#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], d, e, i, j, k=0;
    int g=0;
    printf("Input Rows and columns of Matrices :\n");
    printf("Rows :\n");
    scanf("%d", &d);
    printf("Columns :\n");
    scanf("%d", &e);
    printf("Input First Matrix :\n");
    for(i=0; i<d; i++)
        {
            for(j=0; j<e; j++)
                {
                    scanf("%d", &a[i][j]);
                }
        }
     printf("Input Second Matrix :\n");
    for(i=0; i<d; i++)
        {
            for(j=0; j<e; j++)
                {
                    scanf("%d", &b[i][j]);
                }
        }
    printf("The Profuct of two given matrices :\n");
    for(i=0; i<d; i++)
        {
            for(j=0; j<e; j++)
                {
                    {
                        c[i][j]=0;
                        for(g=0; k<d; g++)
                            {
                                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                            }
                    }
                        printf("%d\t", c[i][j]);
                }
            printf("\n");
        }

	return 0;

}
