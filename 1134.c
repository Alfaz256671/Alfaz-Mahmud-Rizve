#include<stdio.h>
int main()
{
    int x,y,Alco=0,Gaso=0,Dies=0;
    scanf("%d",&x);
    while(x!=4)
    {
        if(x==1)
          Alco++;
        else if(x==2)
          Gaso++;
        else if(x==3)
          Dies++;
        scanf("%d",&x);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",Alco);
    printf("Gasolina: %d\n",Gaso);
    printf("Diesel: %d\n",Dies);
    return 0;
}
