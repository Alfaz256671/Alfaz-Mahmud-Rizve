#include<stdio.h>
int main()
{
    int i,a,max,f;
    for(i=1 ; i<=100 ; i++)
    {
        scanf("%d",&a);
        if(i==1)
            max=a;
        else
        {
            if(max<a)
            {
                max=a;
                f=i;
            }
        }

    }
    printf("%d\n%d\n",max,f);
   return 0;
}
