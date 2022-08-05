#include<stdio.h>
int main()
{
    int a,b,c,d,t;
    scanf("%d", &a);
    b=a/3600;
   t=a%3600;
   c=t/60;
   t=t%60;
   printf("%d:%d:%d\n", b,c,t);

}
