#include<stdio.h>
int main()
{
    int n,k=1,i,j;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=3 ; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("PUM\n");
        k=k+1;
    }
    return 0;
}
