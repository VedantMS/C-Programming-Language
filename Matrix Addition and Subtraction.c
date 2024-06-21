// Matrix Addition and Subtraction

#include<stdio.h>
int main()
{
    int a, b, c, d, p[10][10], q[10][10];
    printf("Input Rows and columns of Matrices :\n");
    printf("Rows :\n");
    scanf("%d", &a);
    a=a-1;
    printf("Columns :\n");
    scanf("%d", &b);
    b=b-1;
    printf("Input First Matrix :\n");
    for(c=0; c<=a; c++)
        {
            for(d=0; d<=b; d++)
                {
                    scanf("%d", &p[c][d]);
                }
        }
     printf("Input Second Matrix :\n");
    for(c=0; c<=a; c++)
        {
            for(d=0; d<=b; d++)
                {
                    scanf("%d", &q[c][d]);
                }
        }
    printf("Addition of the given two matrices :\n");
     for(c=0; c<=a; c++)
        {
            for(d=0; d<=b; d++)
                {
                        printf("%d\t", p[c][d]+q[c][d]);
                }
            printf("\n");
        }
    printf("Subtraction of the given two matrices :\n");
     for(c=0; c<=a; c++)
        {
            for(d=0; d<=b; d++)
                {
                        printf("%d\t", p[c][d]-q[c][d]);
                }
            printf("\n");
        }
    return 0;  
}
