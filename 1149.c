#include<stdio.h>
int main()
{
    int x,y,sum=0,i;
    scanf("%d%d",&x,&y);
    while(y<=0)
     scanf("%d",&y);
    for(i=1 ; i<=y ; i++)
    {
        sum=sum+x;
        x++;
    }
    printf("%d\n",sum);
}
