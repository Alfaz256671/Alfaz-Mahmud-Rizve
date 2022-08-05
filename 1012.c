#include<stdio.h>
int main()
{

    double a,b,c,pi,d,q,r,s,t;
    pi=3.14159;
    scanf("%lf %lf %lf", &a,&b,&c);
    d =(0.5 * a * c);
    q=pi*c*c;
    r=0.5*((a+b)*c);
    s=b*b;
    t=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", d,q,r,s,t);
    return 0;
}
