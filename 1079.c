#include<stdio.h>
int main()
{
   int test,i;
   float a,b,c,avg;
   scanf("%d",&test);
   for(i=1 ; i<=test ; i++)
   {
       scanf("%f%f%f",&a,&b,&c);
       avg=((a*2)+(b*3)+(c*5))/10;
       printf("%.1f\n",avg);
   }
    return 0;
}
