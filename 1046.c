#include<stdio.h>
int main()
{

    int a,b,c,d;
    scanf("%d%d", &a ,&b);
    if(a>=b)
    {
        b= b+24;
        c=b-a;
        printf("O JOGO DUROU %d HORA(S)", c);
    }
    else
    {
        d= b-a;
      printf("O JOGO DUROU %d HORA(S)", d);
    }
}
