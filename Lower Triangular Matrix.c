// Lower Triangular Matrix

#include<stdio.h>
int main()
{
    int a, b[5][5], d, e=0, n=1;
    printf("Input Matrix:\n");
    for(a=0; a<=4; a++)
        {
            for(d=0; d<=4; d++)
                {
                    scanf("%d", &b[a][d]);
                }
        }
    for(a=0; a<=3; a++)
        {
            for(d=n; d<=4; d++)
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
    return 0;
}
