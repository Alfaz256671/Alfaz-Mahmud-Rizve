#include<stdio.h>
int main()
{
    int a,b,c,d,sum,j,f=0;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    {

    if(b>c && d>a)
    {
        if((c+d)>(a+b))
        {
            if(c>0 && d>0)
            {
                if(a%2==0)
                {
                    f=1;
                }
            }
        }
    }}
    if(f==1)
    {
        printf("Valores aceitos\n");
                    return 0;
    }
    else{
        printf("Valores nao aceitos\n");
        return 0;
    }

}
