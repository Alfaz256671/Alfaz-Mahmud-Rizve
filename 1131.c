#include<stdio.h>
int main()
{
    int n=1,count=0,Int=0,Gre=0,Emp=0,x,y;
    scanf("%d%d",&x,&y);
    while(n==1)
    {
        if(x>y)
         Int++;
        else if(x<y)
          Gre++;
        else
          Emp++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n==1)
         scanf("%d%d",&x,&y);
        count++;
    }
    printf("%d grenais\n",count);
    printf("Inter:%d\n",Int);
    printf("Gremio:%d\n",Gre);
    printf("Empates:%d\n",Emp);
    if(Int>Gre)
     printf("Inter venceu mais\n");
    else if(Gre>Int)
     printf("Gremio venceu mais\n");
    else
     printf("Nao houve vencedor\n");
}
