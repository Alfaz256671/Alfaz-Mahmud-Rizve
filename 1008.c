#include<stdio.h>
int main()
{
    int a,b;
    double c,d;
    scanf("%d %d %lf", &a,&b,&c);
    d=b*c;
    printf("NUMBER = %d\nSALARY = U$ %.2lf", a,d);
    return 0;
}
