#include<stdio.h>
int main()
{
    int a,b,a1,b1;
    scanf("%d%d%d%d",&a,&b,&a1,&b1);
    if(a<=a1 && b<b1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a1-a,b1-b);
    else if(a<a1 && b==b1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a1-a,b1-b);
    else if(a==a1 && b==b1 && a==b)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(a<a1 && b>b1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a1-a-1,60-b+b1);
    else if(a>a1 && b<b1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+a1,b1-b);
    else if(a>a1 && b==b1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+a1,b1-b);
    else if(a>a1 && b>b1)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+a1-1,60-b+b1);
    else if(a==a1 && b>b1)
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",60-b+b1);
    return 0;
}
