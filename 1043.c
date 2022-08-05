#include<stdio.h>
int main()
{
    float a,b,c, p,t;
    scanf("%f%f%f", &a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c>b))
    {
        p= a+b+c;
        printf("Perimetro = %.1f\n", p);
    }
    else{
        t= (0.5 * (a+b) * c);
        printf("Area = %.1f\n", t);
    }
}
