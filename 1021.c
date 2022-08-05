#include<stdio.h>
int main()
{

    double a;
    int b,c;

    scanf("%.2lf", &a);
    c=a*100;


    printf("NOTAS:\n");
    printf("%.2lf nota(s) de R$ 100,00\n", a/100.00);
    b = (c%100);


    printf("%.2lf nota(s) de R$ 50,00\n", b/50,00);
    b = (b%50);

    printf("%.2lf nota(s) de R$ 20,00\n", b/20.00);
    b = (b%20);

    printf("%.2lf nota(s) de R$ 10,00\n", b/10.00);
    b = (b%10);

    printf("%.2lf nota(s) de R$ 5,00\n", b/5.00);
    b = (b%5);

    printf("%.2lf nota(s) de R$ 2,00\n", b/2.00);
    b = (b%2);

    printf("MOEDAS:");
    printf("%.2lf moeda(s) de R$ 1.00",b/1.00);
    b = (b%1);

    b= b%100;

    printf("%.2lf moeda(s) de R$ 0.50",b/0.50);
    b = (b%50);
    printf("%.2lf moeda(s) de R$ 0.25",b/0.25);
    b = (b%25);

    printf("%.2lf moeda(s) de R$ 0.10",b/0.10);
    b = (b%10);

    printf("%.2lf moeda(s) de R$ 0.05",b/0.05);
    b = (b%05);

    printf("%.2lf moeda(s) de R$ 0.01",b/0.01);
    b = (b%1);


    return 0;
}

