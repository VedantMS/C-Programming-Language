// Upper Triangular Matrix

#include<stdio.h>
void main()
{
    int a, b[5][5], d, e=0, n=3;
    printf("Input Matrix:\n");
    for(a=0; a<=4; a++)
        {
            for(d=0; d<=4; d++)
                {
                    scanf("%d", &b[a][d]);
                }
        }
    for(a=4; a>=0; a--)
        {
            for(d=n; d<=3; d++)
                {
                    if(b[a][d]!=0)
                        {
                            e++;
                        }
                }
            n++;
        }
    if(e!=0)
        {
            printf("Not a lower trianguale matrix.");
        }
    if(e==0)
        {
            printf("Is a lower triangular matrix.");
        }
}
