#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        temp=i;
        for(j=1 ; j<=3 ; j++)
        {
            if(j!=3)
                printf("%d ",i);
            else
                printf("%d",i);
            i=i*temp;
        }
        printf("\n");
        i=temp;

        for(j=1 ; j<=3 ; j++)
        {
            if(j==1)
                printf("%d ",i);
            else
            {
                if(j!=3)
                    printf("%d ",i+1);
                else
                    printf("%d",i+1);
            }
            i=i*temp;
        }
        printf("\n");
        i=temp;
    }
}
