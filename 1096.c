#include<stdio.h>
int main()
{
    int i,j,count=7;
    for(i=1 ; i<=9 ; i=i+2)
    {
       for(j=1 ; j<=3 ; j++)
       {
           printf("I=%d J=%d\n",i,count);
           count--;
       }
       count=7;
    }
    return 0;
}
