#include<stdio.h>
int main()
{
    float sal,temp,temp1,temp2;
    scanf("%f",&sal);
    if(sal<=2000)
        printf("Isento\n");
    else if(sal>2000 && sal<=3000)
    {
        temp=(sal-2000)*0.08;
        printf("R$ %.2f\n",temp);
    }
    else if(sal>3000 && sal<=4500)
    {
        temp=1000*0.08;
        temp1=(sal-3000)*0.18;
        printf("R$ %.2f\n",temp+temp1);
    }
    else if(sal>4500)
    {
        temp=1000*0.08;
        temp1=1500*0.18;
        temp2=(sal-4500)*0.28;
        printf("R$ %.2f\n",temp+temp1+temp2);
    }
    return 0;
}
