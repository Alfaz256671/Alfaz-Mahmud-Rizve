#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&a);
        if(a==0)
            printf("NULL\n");
        else if(a%2==0)
        {
            printf("EVEN ");
            if(a>0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
        else
        {
            printf("ODD ");
            if(a>0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
    }
    return 0;
}
