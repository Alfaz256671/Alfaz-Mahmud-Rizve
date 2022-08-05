#include<stdio.h>
#include<math.h>
int main()
{

    double a , b, c,d,g;
    scanf("%lf %lf %lf %lf", &a, &b,&c,&d);

    g= sqrt(pow(c-a,2)+pow(d-b,2));

    printf("%.4lf\n", g);
    return 0;


}
