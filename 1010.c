#include<stdio.h>
int main()
{

    int a,b,c,d;
    double e,f,g;
    scanf("%d%d%lf%d%d%lf", &a,&b,&e,&c,&d,&f);
    g=(b*e)+(d*f);
    printf("VALOR A PAGAR: R$ %.2lf\n", g);
    return 0;

}
