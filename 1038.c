#include<stdio.h>
int main()
{
    int s,n;
    float i,t;
    scanf("%d", &s);
   if(s==1)
   {
       scanf("%d", &n);
       i=4.00 * n;
       printf("Total: R$  %.2f\n", i);

   }
   else if(s==2)
   {
       scanf("%d", &n);
       printf("Total: R$  %.2f\n", (4.50*n));
   }
   else if(s==3)
   {
       scanf("%d", &n);
       printf("Total: R$  %.2f\n", (5.00*n));
   }
   else if(s==4)
   {
       scanf("%d", &n);
       printf("Total: R$  %.2f\n", (2.00*n));
   }
   else if(s==5)
   {
       scanf("%d", &n);
       printf("Total: R$  %.2f\n", (1.00*n));
   }

}
