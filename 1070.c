#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    i=n;
    while(i<=n+12)
    {
        if(i%2 !=0)
        {
            printf("%d\n",i);
            count++;
        }
        i++;
        if(count == 6)
            break;
    }
}
