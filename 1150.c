#include<stdio.h>
int main()
{
    int x,z,a,count=1,i,sum=0;
    scanf("%d%d",&x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
    }
    for(i=x ; i<=z ; i++)
    {
        sum=sum+i;
        if(sum>z)
            break;
        count++;
    }
    printf("%d\n",count);

}
