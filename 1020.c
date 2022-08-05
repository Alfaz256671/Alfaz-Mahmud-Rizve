#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d", &a);
    b=a/365;
   t=a%365;
   c=t/30;
   t=t%30;
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", b,c,t);

}

