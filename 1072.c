#include<stdio.h>
int main()
{
    //1072
    int a,n,i,in=0;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&a);
        if(a>=10 && a<=20)
            in++;
    }
    printf("%d in\n",in);
    printf("%d out\n",n-in);
    return 0;
}
