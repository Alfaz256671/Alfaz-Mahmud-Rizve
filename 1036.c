#include<stdio.h>
#include <math.h>

int main()
{
 double a, b, c, t,r1,r2;
 scanf("%lf %lf %lf", &a, &b, &c);
 r1=((-b + t) / (2 * a));
 r2=((-b - t) / (2 * a));

 if(((b * b) - 4 * a * c) < 0 || a == 0){
     printf("Impossivel calcular\n");
 }
 else{
  t = sqrt((b * b) - 4 * a * c);
  printf("R1 = %.5lf\nR2 = %.5lf\n", r1,r2);
    }
 return 0;
}
