#include<stdio.h>
int main()
{
    int i,j,count=1;
    for(j=60 ; j>=0 ; j=j-5)
    {
        printf("I=%d J=%d\n",count,j);
        count=count+3;
    }
    return 0;
}
