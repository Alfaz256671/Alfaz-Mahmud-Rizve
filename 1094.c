#include<stdio.h>
#include<ctype.h>
int main()
{
    int test,i,am,total,R=0,S=0,C=0;
    float TC,TR,TS;
    char a;
    scanf("%d",&test);
    for(i=1 ; i<=test ; i++)
    {
        scanf("%d %c",&am,&a);
        if(a=='R')
            R=R+am;
        else if(a=='S')
            S=S+am;
        else if(a=='C')
            C=C+am;
    }
    total=R+C+S;
    TC=((float)C/total)*100;
    TR=((float)R/total)*100;
    TS=((float)S/total)*100;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %%\n",TC);
    printf("Percentual de ratos: %.2f %%\n",TR);
    printf("Percentual de sapos: %.2f %%\n",TS);
   return 0;
}
