#include<stdio.h>
int main()
{
    float a,b,sum=0;
    int i,count=0;
    for(i=1 ; i<=6 ; i++)
    {
        scanf("%f",&b);
        if(b>0)
        {
            count++;
            sum=sum+b;
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);
    return 0;
}

