#include<stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    for(i=1 ; i<=y ; i++)
    {
        for(j=1 ; j<=x ; j++)
        {
            if(j!=x)
            {
            printf("%d ",i);
            i=i+1;
            }
            else
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
