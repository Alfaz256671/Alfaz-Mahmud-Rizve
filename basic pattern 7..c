#include<stdio.h>
int main()
{
    int x,i,j,k;
    scanf("%d",&x);
    for(i=1 ; i<x ; i++)
    {
        for(j=1 ; j<=x-i ; j++)
        {
            printf(" ");
        }
        for(k=1 ; k<=2*i-1 ; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1 ; i<=x ; i++)
    {
        for(k=1 ; k<=i-1 ; k++)
        {
            printf(" ");
        }

        for(j=0 ; j<2*x-(2*i-1) ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
